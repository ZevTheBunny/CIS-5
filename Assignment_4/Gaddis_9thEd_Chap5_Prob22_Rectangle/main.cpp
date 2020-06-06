/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 10:53 AM
 * Purpose:  Displays a custom rectangle.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char sybol; //The sybol used to dispaly the rectangle.
    short size; //The side size of the rectangle.
    string line;//An individual row othe rectangle.
    //Initialize or input i.e. set variable values
    cin>>size>>sybol; //get the inputs.
    //Map inputs -> outputs
    for (char i = 0; i < size; i++){//Figures out how each line looks.
        line += sybol;
    }
    for (char i = 0; i < size; i++){//Prints lines equal to size.
       cout<<line;
       if (i != size-1) cout<<endl; //Checks if its the last line to skip the endl
       
    }
    //Display the outputs
    //Exit stage right or left!
    return 0;
}