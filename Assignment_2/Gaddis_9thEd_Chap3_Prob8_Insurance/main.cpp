/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 10, 2020, 12:37 PM
 * Purpose:  Finds how much a house should be insured
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
    int hoVal;//The Value of the house.
    float insRati =.80; //The target percent they want Insurance to cover.
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl; //Annonces the purpose of the program.
    cout<<"How much is your house worth?"<<endl;//Asks for house value.
    cin>>hoVal;//inputs the houses value.
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"You need $"<<hoVal*insRati<<" of insurance.";//Displays the output.
    //Exit stage right or left!
    return 0;
}