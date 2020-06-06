/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on Marh 29, 2020, 7:41PM
 * Purpose:  Althabitises names
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
    unsigned short l1,
                   l2,
                   w1,
                   w2,
                   a1,
                   a2;
    //Initialize or input i.e. set variable values
    cout<<"Enter the lengh and width of one rectangle than another."<<endl;
    cin>>l1>>w1>>l2>>w2;
    //Map inputs -> outputs
    a1 = l1*w1;
    a2 = l2*w2;
    //Display the outputs
    if (a1 > a2){
        cout<<"The first rectangle has the greater area.";
    }
    else if (a1 < a2){
        cout<<"The secound rectangle has the greater area.";
    }
    else{
        cout<<"The two rectangles have the same area.";
    }
    //Exit stage right or left!
    return 0;
}