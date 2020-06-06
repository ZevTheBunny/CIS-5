/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 10:01 AM
 * Purpose:  Finds how much someone should be payed
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath> //C++ math Library
#include <cstdlib> 

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const unsigned char CVNCENT = 100; //The amount of cents in a dollar.
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    short days; //Stores the number of days.
    unsigned long long totPay; //Stores the total pay do.
    //Initialize or input i.e. set variable values
    cin>>days;//Inputs the number of days worked.
    
    //Map inputs -> outputs
    if (days < 1) //Checks if the input is valid.
    {
        cout<<"You gotta work for atleast one day "<<days<<" is less than a day"; //Yells at the user if the input is not valid.
        exit(0); //Exits the program.
    }
    
    totPay = -(1 - (1<<days));//Calculates the pay do.
    //Display the outputs
    unsigned int dollars = totPay/CVNCENT; //The amount of dollars.
    unsigned short pennies = totPay % CVNCENT;//The amount of change.
    cout<<"Pay = $"<<dollars<<"."<< (pennies < 10? "0":"")<<pennies; //Dispays the outputs.
    //Exit stage right or left!
    return 0;
}