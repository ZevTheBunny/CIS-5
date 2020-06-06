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
    bool win = false;
    char p1 = 0,
         p2 = 0,
         p3 = 0,
         p4 = 0;
    short numPlys;
    string snake = "You landed on a snake and fell to ",
           ladder = "You landed on a ladder and advance to ";
    //Variable Initialization
    do{
        cout<<"How many players are there? Enter a number between 1 and 4: ";
        cin>>numPlys;
        //numPlys -= 48;
    }while(numPlys < 1 || numPlys > 4);
    do{
    for (short turn = 1; turn<=numPlys;turn++){
        char * player;
        switch (turn){
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
        cout<<"Its player "<<turn<<"'s turn."<<endl
                <<"\t You are on space "<<(short)(*player)<<", type roll when you are ready to roll: ";
        {
            string roll;
            cin>>roll;
            cout<<(short)*player;
            if (roll == "roll" ||roll == "Roll"||roll=="ROLL"){
                char rollVal (rand()%6 +1),
                     nextVal = *player + rollVal ;
                cout<<"You rolled a "<<(short)rollVal<<endl;
                if( nextVal <=100){
                    *player = nextVal;
                    cout<<"You move up to "<<(short)*player<<endl;
                }
                else{
                    cout<<"You overshot so you do not move"<<endl;
                }
            }   
        }
        switch (*player){
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
        if (*player ==100){
            cout<<"Congradulations Player "<<turn+48<<" wins!!";
            win = true;
        }  
    }
    }while(win==false);
    //Mapping Process Inputs to Outputs
    
    //Display Outputs
    
    //Clean Up
    
    //Exit stage right!
    return 0;
}

