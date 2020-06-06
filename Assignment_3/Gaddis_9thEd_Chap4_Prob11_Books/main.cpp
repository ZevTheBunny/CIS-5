/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 29, 2020, 8:06 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char read=1,
                  points=0;
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl
        <<"Input the number of books purchased this month."<<endl;
    cin>>read;
    //Map inputs -> outputs
    switch (read)
    {
        case '0':
            points = 0;
            break;
        case '1':
            points = 5;
            break;
        case '2':
            points = 15;
            break;
        case '3':
            points = 30;
            break;
        default:
            points = 60;
            break;
    }
    //Display the outputs
    char w = 2;
    cout<<"Books purchased = "<<setw(w)<<read<<endl
        <<"Points earned   = "<<setw(w)<<(short)points;
    //Exit stage right or left!
    return 0;
}