/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on May 2, 2020, 6:57pm
 * Purpose: Finds the sum of two numbers (50 and 100)
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {    
    //Variable Declarations
    unsigned char numb1 =50; // The first number to be added
    unsigned char numb2 = 100; // The secound number to be added
    unsigned char total=0; // The total of numb1 and numb2
    //Variable Initialization
    
    //Mapping Process Inputs to Outputs
    total = numb1 + numb2;
    //Display Outputs
    cout<<"The sum is "<<(short)total;
    //Clean Up
    
    //Exit stage right!
    return 0;
}

