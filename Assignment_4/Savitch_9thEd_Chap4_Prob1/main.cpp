/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on Apri 7, 2020, 11:27 AM
 * Purpose:  Finds mpg
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/Output manipulation Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVLITER = 0.264179;  //Conversions rate from gallons to liters.
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short liters, //The liters of gas used.
          miles;//The miles traveled.
    float mpg;//The miles per gallon.
    char repeat;//Weather or not the program will repeat.
    //Initialize or input i.e. set variable values
    do{ 
    cout<<"Enter number of liters of gasoline:"<<endl<<endl; //Asks for liters
    cin>>liters;                                             //and takes in liters.
    cout<<"Enter number of miles traveled:"<<endl<<endl; //Asks for miles
    cin>>miles;//and takes in miles.
    //Map inputs -> outputs
    mpg = (float)miles/liters; //Finds the mpl.
    mpg /=CNVLITER; //converts to mpg.
    
    //Display the outputs
    cout<<setprecision(2)<<fixed;//gets output ready.
    cout<<"miles per gallon:"<<endl<<mpg<<endl//outputs results.
        <<"Again:"<<endl;//Asks if they want go again.
    cin>>repeat;//gets the repeat input.
    if (repeat == 'y') cout<<endl;//Checks for the endl.
    }while (repeat == 'y');//If they put y it goes again.
    //Exit stage right or left!
    return 0;
}