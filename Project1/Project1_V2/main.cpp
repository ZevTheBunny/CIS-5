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
    bool win = false;//Wether the game has been won yet.
    char p1 = 0,//The location of player 1
         p2 = 0,//The location of player 2
         p3 = 0,//The location of player 3
         p4 = 0;//The location of player 4
    short numPlys;//The number of players in this game.
    float turns;//The average amount of turns the game lasts with that amount of players.
    string snake = "You landed on a snake and fell to ",//The text for landing on a snake.
           ladder = "You landed on a ladder and advance to ";//The text for landing on a ladder.
    //Variable Initialization
    //Setup
    do{//Asks for how many players their are until the user gives a valid input.
        cout<<"How many players are there? Enter a number between 1 and 4: ";
        cin>>numPlys;
    }while(numPlys < 1 || numPlys > 4);
    for(int i=0;i<10;i++){
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
                cout<<"Its player "<<turn<<"'s turn."<<endl//Tells people who's turn it is,
                    <<"\t You are on space "<<(short)(*player)<<", type roll when you are ready to roll: ";//where they are, and prompts them to roll.
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
            
            turns ++;
        }while(win==false);
        p1 = p2 = p3 = p4 = 0;
        win = false;
    }
    turns /=10;
    cout<<setprecision(2)<<fixed<<"It will take an average of "<<turns<<" turns to finish with this many players."<<endl;
    //The actual game.
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
            cout<<"Its player "<<turn<<"'s turn."<<endl//Tells people who's turn it is,
                <<"\t You are on space "<<(short)(*player)<<", type roll when you are ready to roll: ";//where they are, and prompts them to roll.
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
    }while(win==false);
    //Mapping Process Inputs to Outputs
    
    //Display Outputs
    
    //Clean Up
    
    //Exit stage right!
    return 0;
}

