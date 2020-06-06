/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 11:04 AM
 * Purpose:  Prints a triangle
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
    //Set the random number seed
    
    //Declare Variables
    short size; //The width (technichly hight) of the triangle.
    //Initialize or input i.e. set variable values
    cin>>size; //inputs size.
    //Map inputs -> outputs
    
    //Display the outputs
    for (int i = 1; i <size+1;i++){ //Prints the top half.
        for (int j = 0; j<i;j++){ //Draws an increasing amount of pluses.
            cout<<"+";
        }
        cout<<endl<<endl; //Adds the double endl becuse thats what you want.
    }
    for (int i = size; i >0;i--){ //Prints the bottom half.
        for (int j = i; j>0;j--){//Draws a decreasing amout of pluses.
            cout<<"+";
        }
        if (i !=1) cout<<endl<<endl; //adds the double endl if its not the last one.
    }
    //Exit 
    //Exit stage right or left!
    return 0;
}