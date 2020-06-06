/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on June 6, 2020, 11:12 AM
 * Purpose: Snake and ladders
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
#include <ctime>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
char snkOladd(char,char &);
void snake(char &, char);
void ladder(char &, char);

short getNumPlys();
float simulate(char);
void play(char);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    srand(static_cast<unsigned int>(time(0)));
    //Variable Declarations
    short numPlys=0;//The number of players in this game.
    float rounds=0;//The average amount of turns the game lasts with that amount of players.
    
    //Figures out how many players their are
    numPlys = getNumPlys();
    //Figures out the game lenght
    rounds = simulate(numPlys);
    cout<<setprecision(2)<<fixed<<"It will take an average of "<<rounds<<" turns to finish with this many players."<<endl<<endl;
    
    //The actual game.
    play(numPlys);
    //Clean Up
    //Exit stage right!
    return 0;
}
char snkOladd(char pos, char &end){
    switch (pos){//Figures out if they landed on a shoot or ladder
        case 1:{
            end = 38;
            return 'L';
        }
        case 4:{
            end = 14;
            return 'L';
        }
        case 9:{
            end = 31;
            return 'L';
        }
        case 16:{
            end = 6;
            return 'S';
        }
        case 21:{
            end = 42;
            return 'L';
        }
        case 28:{
            end = 84;
            return 'L';
        }
        case 36:{
            end = 44;
            return 'L';
        }
        case 48:{
            end = 26;
            return 'S';
        }
        case 49:{
            end = 11;
            return 'S';
        }
        case 51:{
            end = 67;
            return 'L';
        }
        case 56:{
            end = 53;
            return 'S';
        }
        case 62:{
            end = 16;
            return 'S';
        }
        case 64:{
            end = 60;
            return 'S';
        }
        case 71:{
            end = 91;
            return 'L';
        }
        case 80:{
            end = 100;
            return 'L';
        }
        case 87:{
            end = 24;
            return 'S';
        }
        case 93:{
            end = 73;
            return 'S';
        }
        case 96:{
            end = 75;
            return 'S';
        }
        case 98:{
            end = 78;
            return 'S';
        }
    }
    return 0;
}
void snake(char &pos, char tail){
    pos = tail;
    cout<<"You landed on a snake and fell to "<<(short)pos<<endl;
}
void ladder(char &pos, char top){
    pos = top;
    cout<<"You landed on a ladder and climbed to "<<(short)pos<<endl;
}

short getNumPlys(){
    short numPlys =  0;
    while(numPlys < 1 || numPlys > 4){//Asks for how many players their are until the user gives a valid input.
        cout<<"How many players are there? Enter a number between 1 and 4: ";
        cin>>numPlys;
    };
    return numPlys;
}

float simulate(char numPlys){
    fstream average("average.txt");
    float rounds=0;//The average amount of turns the game lasts with that amount of players.


    bool c1,c2,c3,c4,c = false;//If the file reading failed
    float a1,a2,a3,a4;//The value in the file
    if(average>>a1)c1=true;//Reads the file for the first value
    if(average>>a2)c2=true;//Reads the file for the secound value
    if(average>>a3)c3=true;//Reads the file for the third value
    if(average>>a4)c4=true;//Reads the file for the forth value
    switch(numPlys){//Figures out which place is 
        case 1:
            if (a1 != 0) c=true;
            break;
        case 2:
            if (a2 != 0) c=true;
            break;
        case 3:
            if (a3 != 0) c=true;
            break;
        case 4:
            if (a4 != 0) c=true;
            break;
    }
    if (c==false){//If the number of players does not have an average
        for(int i=0;i<100;i++){//Plays the game 100 times
            bool win = false;//Wether the game has been won yet.
            char pos[4] = {0,0,0,0};//The location of players
            do{//Goes until someone has won.
                for (short turn = 1; turn<=numPlys;turn++){//Does a turn for each player. 
                    //Rolls the dice
                    char rollVal (rand()%6 +1),//The roll they got
                         nextVal = pos[turn] + rollVal ;//The place that roll will put them.
                    //Moves the player
                    if( nextVal <=100){//If their roll will not put them over 100
                        pos[turn] = nextVal;//Moves the player up
                    }
                    //Checks for a snake or a ladder
                    char end;
                    char sOrl = snkOladd(pos[turn],end);
                    pos[turn] = end;
                    //Check if the player wins
                    if (pos[turn] ==100){//Checks if the player landed on 100
                        win = true;//And sets win to true, ending the loop.
                    }  
                }
                //Counts the round
                rounds ++;//adds to the round counter
            }while(win==false);//if the test game is over
            //Resets the board
            for(char position: pos){
                position = 0;
            }
            win = false;
        }
        //Once it has looped through 100 games
        rounds /=100;//Finds the average amount of turns
        switch(numPlys){//Sets the propper a to rounds
            case 1:
                a1 = rounds;
                break;
            case 2:
                a2 = rounds;
                break;
            case 3:
                a3 = rounds;
                break;
            case 4:
                a4 = rounds;
                break;
        }
    }
    else{//If there is a value for that number of players
        switch(numPlys){//Sets rounds to the propper a
            case 1:
                rounds=a1;
                break;
            case 2:
                rounds=a2;
                break;
            case 3:
                rounds=a3;
                break;
            case 4:
                rounds=a4;
                break;
        }
    }
    average.clear();//Goes back to the start of the file
    average.seekg(0, ios::beg);
    //Refills the file
    c1==false?
        average<<"0"<<endl:
        average<<a1<<endl;
    c2==false?
        average<<"0"<<endl:
        average<<a2<<endl;
    c3==false?
        average<<"0"<<endl:
        average<<a3<<endl;
    c4==false?
        average<<"0":
        average<<a4;

    average.close();//Closes the file.
    return rounds;
}

void play(char numPlys){
    bool win = false;//Wether the game has been won yet.
    char pos[4] = {0,0,0,0};//The location of players
    while(win==false){//Goes until someone has won.
        for (short turn = 1; turn<=numPlys;turn++){//Does a turn for each player. 
            cout<<endl<<endl;
            cout<<"Its player "<<turn<<"'s turn."<<endl//Tells people who's turn it is,
                <<"You are on space "<<(short)(pos[turn])<<", type roll when you are ready to roll: ";//where they are, and prompts them to roll.
            {
                string roll;//stores their roll input.
                cin>>roll;
                if (roll == "roll" ||roll == "Roll"||roll=="ROLL"){//If they typed roll
                    char rollVal (rand()%6 +1),//The roll they got
                         nextVal = pos[turn] + rollVal ;//The place that roll will put them.
                    cout<<"You rolled a "<<(short)rollVal<<endl;//Tells them their roll.
                    if( nextVal <=100){//If their roll will not put them over 100
                        pos[turn] = nextVal;//Moves the player up
                        cout<<"You move up too "<<(short)pos[turn]<<endl;//Tells them their new position.
                    }
                    else{//If the roll will put the player over 100
                        cout<<"You overshot so you do not move"<<endl;//Tells them they overshot and they do not advance.
                    }
                }   
            }
                char end;
                char sOrl = snkOladd(pos[turn],end);
                if (sOrl == 'L') ladder(pos[turn],end);
                else if (sOrl == 'S') snake(pos[turn],end);
                
            if (pos[turn] ==100){//Checks if the player landed on 100
                cout<<"Congradulations Player "<<turn+48<<" wins!!";//If they did tells them they one
                win = true;//And sets win to true, ending the loop.
            }  
        }
    };
}