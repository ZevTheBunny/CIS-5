/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on Marh 29, 2020, 9:38PM
 * Purpose:  Finds larger and smaller value
 */

//System Libraries
#include <string>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short num1,
          num2;
    //Initialize or input i.e. set variable values
    cin>>num1>>num2;
    //Map inputs -> outputs
    
    //Display the outputs
    num1<num2?
        cout<<num2<<" is greater than "<<num1:
        cout<<num1<<" is greater than "<<num2;
    //Exit stage right or left!
    return 0;
}