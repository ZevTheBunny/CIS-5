/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on May 2, 2020, 8:13pm
 * Purpose: Finds how far you can travel per tank
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
    unsigned char tankCap;//Gas capacity of a tank.
    float MPGCity,//The milage in city
          MPGFree;//The milage on a freeway.
    
    //Variable Initialization
    tankCap = 20;
    MPGCity = 23.5f;
    MPGFree = 28.9f;
    //Mapping Process Inputs to Outputs
 
    //Display Outputs
    cout<<"The car can go "<<tankCap*MPGCity<<" miles in city and "<<MPGFree *tankCap<<" miles on a freeway.";
    //Clean Up
    
    //Exit stage right!
    return 0;
}

