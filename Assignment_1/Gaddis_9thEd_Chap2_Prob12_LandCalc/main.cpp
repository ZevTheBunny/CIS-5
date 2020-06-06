/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on May 2, 2020, 8:16pm
 * Purpose: Calculates number of acres in a tract of land
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
float acre = 43560;//An acre in feet.
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {    
    //Variable Declarations
    unsigned int tract;
    //Variable Initialization
    tract = 391876;
    //Mapping Process Inputs to Outputs
 
    //Display Outputs
    cout<<"There are "<<(tract/acre) <<" acres of land.";
    //Clean Up
    
    //Exit stage right!
    return 0;
}

