/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on April 21, 2020, 12:09 AM
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    srand(static_cast<unsigned int>(time(0)));
    //Variable Declarations
    fstream average("average.txt");
    
    bool win = false;//Wether the game has been won yet.
    char p1 = 0,//The location of player 1
         p2 = 0,//The location of player 2
         p3 = 0,//The location of player 3
         p4 = 0;//The location of player 4
    short numPlys=0;//The number of players in this game.
    float turns=0;//The average amount of turns the game lasts with that amount of players.
    string snake = "You landed on a snake and fell to ",//The text for landing on a snake.
           ladder = "You landed on a ladder and advance to ";//The text for landing on a ladder.
    
    //Figures out how many players their are
    while(numPlys < 1 || numPlys > 4){//Asks for how many players their are until the user gives a valid input.
        cout<<"How many players are there? Enter a number between 1 and 4: ";
        cin>>numPlys;
    };
    
    //Figures out the game lenght
    {
        bool c1,c2,c3,c4,c = false;
        float a1,a2,a3,a4;
        if(average>>a1)c1=true;
        if(average>>a2)c2=true;
        if(average>>a3)c3=true;
        if(average>>a4)c4=true;
        switch(numPlys){
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
        if (c==false){
            for(int i=0;i<100;i++){
                do{//Goes until someone has won.
                    for (short turn = 1; turn<=numPlys;turn++){//Does a turn for each player. 
                        char * player;//The position of the current player
                        switch (turn){//Chooses what player is currently playing and links player to it.
                            case 1:
                                player = &p1;
                                break;
                            case 2:
                                player = &p2;
                                break;
                            case 3:
                                player = &p3;
                                break;
                            case 4:
                                player = &p4;
                                break;
                        }
                            char rollVal (rand()%6 +1),//The roll they got
                                 nextVal = *player + rollVal ;//The place that roll will put them.
                            if( nextVal <=100){//If their roll will not put them over 100
                                *player = nextVal;//Moves the player up
                            }


                        switch (*player){//Figures out if they landed on a shoot or ladder
                            case 1:{
                                *player = 38;
                                break;
                            }
                            case 4:{
                                *player = 14;
                                break;
                            }
                            case 9:{
                                *player = 31;
                                break;
                            }
                            case 16:{
                                *player = 6;
                                break;
                            }
                            case 21:{
                                *player = 42;
                                break;
                            }
                            case 28:{
                                *player = 84;
                                break;
                            }
                            case 36:{
                                *player = 44;
                                break;
                            }
                            case 48:{
                                *player = 26;
                                break;
                            }
                            case 49:{
                                *player = 11;
                                break;
                            }
                            case 51:{
                                *player = 67;
                                break;
                            }
                            case 56:{
                                *player = 53;
                                break;
                            }
                            case 62:{
                                *player = 16;
                                break;
                            }
                            case 64:{
                                *player = 60;
                                break;
                            }
                            case 71:{
                                *player = 91;
                                break;
                            }
                            case 80:{
                                *player = 100;
                                break;
                            }
                            case 87:{
                                *player = 24;
                                break;
                            }
                            case 93:{
                                *player = 73;
                                break;
                            }
                            case 96:{
                                *player = 75;
                                break;
                            }
                            case 98:{
                                *player = 78;
                                break;
                            }

                        }       
                        if (*player ==100){//Checks if the player landed on 100
                            win = true;//And sets win to true, ending the loop.
                        }  
                    }

                    turns ++;
                }while(win==false);
                p1 = p2 = p3 = p4 = 0;
                win = false;
            }
            turns /=100;
            switch(numPlys){
                case 1:
                    a1 = turns;
                    break;
                case 2:
                    a2 = turns;
                    break;
                case 3:
                    a3 = turns;
                    break;
                case 4:
                    a4 = turns;
                    break;
            }
        }
        else{
            switch(numPlys){
                case 1:
                    turns=a1;
                    break;
                case 2:
                    turns=a2;
                    break;
                case 3:
                    turns=a3;
                    break;
                case 4:
                    turns=a4;
                    break;
            }
        }
        average.clear();
        average.seekg(0, ios::beg);
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
        cout<<setprecision(2)<<fixed<<"It will take an average of "<<turns<<" turns to finish with this many players."<<endl<<endl;
        average.close();
    }
    
    //The actual game.
    while(win==false){//Goes until someone has won.
        for (short turn = 1; turn<=numPlys;turn++){//Does a turn for each player. 
            cout<<endl<<endl;
            char * player;//The position of the current player
            switch (turn){//Chooses what player is currently playing and links player to it.
                case 1:
                    player = &p1;
                    break;
                case 2:
                    player = &p2;
                    break;
                case 3:
                    player = &p3;
                    break;
                case 4:
                    player = &p4;
                    break;
            }
            cout<<"Its player "<<turn<<"'s turn."<<endl//Tells people who's turn it is,
                <<"You are on space "<<(short)(*player)<<", type roll when you are ready to roll: ";//where they are, and prompts them to roll.
            {
                string roll;//stores their roll input.
                cin>>roll;
                if (roll == "roll" ||roll == "Roll"||roll=="ROLL"){//If they typed roll
                    char rollVal (rand()%6 +1),//The roll they got
                         nextVal = *player + rollVal ;//The place that roll will put them.
                    cout<<"You rolled a "<<(short)rollVal<<endl;//Tells them their roll.
                    if( nextVal <=100){//If their roll will not put them over 100
                        *player = nextVal;//Moves the player up
                        cout<<"You move up too "<<(short)*player<<endl;//Tells them their new position.
                    }
                    else{//If the roll will put the player over 100
                        cout<<"You overshot so you do not move"<<endl;//Tells them they overshot and they do not advance.
                    }
                }   
            }
            switch (*player){//Figures out if they landed on a shoot or ladder
                case 1:{
                    *player = 38;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 4:{
                    *player = 14;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 9:{
                    *player = 31;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 16:{
                    *player = 6;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 21:{
                    *player = 42;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 28:{
                    *player = 84;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 36:{
                    *player = 44;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 48:{
                    *player = 26;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 49:{
                    *player = 11;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 51:{
                    *player = 67;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 56:{
                    *player = 53;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 62:{
                    *player = 16;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 64:{
                    *player = 60;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 71:{
                    *player = 91;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 80:{
                    *player = 100;
                    cout<<ladder<<(short)*player<<endl;
                    break;
                }
                case 87:{
                    *player = 24;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 93:{
                    *player = 73;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 96:{
                    *player = 75;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }
                case 98:{
                    *player = 78;
                    cout<<snake<<(short)*player<<endl;
                    break;
                }

            }       
            if (*player ==100){//Checks if the player landed on 100
                cout<<"Congradulations Player "<<turn+48<<" wins!!";//If they did tells them they one
                win = true;//And sets win to true, ending the loop.
            }  
        }
    };
    //Clean Up
    //Exit stage right!
    return 0;
}

