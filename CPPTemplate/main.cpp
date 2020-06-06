/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on February 18, 2020, 11:33 AM
 * Purpose: C++ Template
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
#include <iomanip>   //Format Library

using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
const int COLS=6;//Number of collums, you put it here not me.

//Conversions, Higher Dimensions

//Function Prototypes
void dice();
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    
    //Variable Declarations
    
    //Variable Initialization
    
    //Mapping Process Inputs to Outputs
    
    //Display Outputs
    
    //Clean Up
    
    //Exit stage right!
    return 0;
}

void dice() {
    //Declare Variables
    const int ROWS=6;//Number of rows.
    int tablSum[ROWS][COLS];//The table.
    
    //Initialize or input i.e. set variable values
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    fillTbl(tablSum,ROWS);//Generates the table.
    
    //Display the outputs
    prntTbl(tablSum,ROWS);//Prints the table.

    //Exit stage right or left!
}
void fillTbl(int tablSum[][COLS],int ROWS){
    for (int i = 0; i <ROWS; i++){//Goes through all the rows.
        for (int j = 0; j<COLS;j++){//Goes through all the collums.
            tablSum[i][j] = i+j+2;//Fills the slots,
        }
    }
}
void prntTbl(const int tablSum[][COLS],int ROWS){
    const char w =4;//The width for spacing between elements.
    cout<<"           C o l u m n s"<<endl//Prints the Colums header.
        <<"     |   1   2   3   4   5   6"<<endl
        <<"----------------------------------"<<endl;
    for (int i = 0; i <ROWS; i++){//Loops trough all the rows.
        switch (i+1){//Prints the Row Headers
            case 1:
                cout<<"   1 |";
                break;
            case 2:
                cout<<"R  2 |";
                break;
            case 3:
                cout<<"O  3 |";
                break;
            case 4: 
                cout<<"W  4 |";
                break;
            case 5:
                cout<<"S  5 |";
                break;
            case 6:
                cout<<"   6 |";
                break;
        }
        for (int j = 0; j<COLS;j++){//Loops through all of the collums
            cout<<setw(w)<<tablSum[i][j];//Prints the item
        }
        cout<<endl;//caps off a row.
    }
}