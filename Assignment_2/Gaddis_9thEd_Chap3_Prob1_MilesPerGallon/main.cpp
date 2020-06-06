/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on March 17, 2020, 7:38 PM
 * Purpose: Finds the miles per a gallon of a car
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
    unsigned short tankCap,//The amount of gas a single tank can hold.
                   range;  //The distance that can be traveled on a single full tank
    float mpg;//The miles that can be traveled per a single gallon (of fuel).
    //Variable Initialization
    cout<<"Enter the gas capacity of your tank in gallons: ";//Asks for the gas capacity of the car,
    cin>>tankCap;//then takes the input and stores it in tankCap.
    cout<<"Enter the distance your car can go on a single tank in miles: ";//Asks for the distance the car can travel on a tank,
    cin>>range;//then stores the input in range.
    //Mapping Process Inputs to Outputs
    mpg = (float)range/tankCap;//Calculates the miles per gallon.
    //Display Outputs
    cout<<endl<<"Your car gets "<<mpg<<" miles per gallon.";//Displays output.
    //Clean Up
    
    //Exit stage right!
    return 0;
}

