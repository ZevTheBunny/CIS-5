/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 9:52 AM
 * Purpose:  Finds the sum of numbers from 1 to the input.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short max, //the top of the range
                   sum; //the sum of all numbers from 1 to max.
    //Initialize or input i.e. set variable values
    cin>>max; //inputs max.
    //Map inputs -> outputs
    sum = max*(max + 1)/2; //Uses calculus to find the sum and puts that into the sum value.
    //Display the outputs
    cout<<"Sum = "<<sum; 
    //Exit stage right or left!
    return 0;
}
