/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on May 2, 2020, 7:49 AM
 * Purpose: Finds miles per gallon  a car gets
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
    unsigned char gallons; //The amount of gallons used.
    unsigned int miDrive; //The distance driven.
    float MPG; //Miles per gallons
    //Variable Initialization
    miDrive = 374;
    gallons = 15;
    //Mapping Process Inputs to Outputs
    MPG = (float)miDrive/gallons; //Calculates milage
    //Display Outputs
    cout<<MPG<<" MPG";
    //Clean Up
    
    //Exit stage right!
    return 0;
}

