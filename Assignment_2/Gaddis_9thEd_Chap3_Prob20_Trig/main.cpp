/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 12, 2020, 10:36 AM
 * Purpose:  Finds and displays the sin cos and tan of an angle inputed in degrees
 */

//System Libraries
#include <cmath> //Cmath Library
#include <iostream>  //Input/Output Library
#include <iomanip> //Io manipulation Libary
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = atan(1)*4; //Its PI, a bit more presise than 3.14 which is all I can rember

float radify(short angle)// Converts the angle in degrees to radians and returns the result
{
    return (angle*PI/180.0f);
}
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    short Dangle; //A short used to store the angle in degrees
    float Rangle;//The angle in radians
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;//States the programs function
    cout<<"Input the angle in degrees."<<endl;//Asks for the angle in degrees
    cin>>Dangle;//Takes in the angle in degrees and stores the value in Dangle
    //Map inputs -> outputs
    Rangle = radify(Dangle); //Converts the angle to radians
    
    //Display the outputs
    cout<<setprecision(4)<<fixed; //Sets the presision and preperares to output the data
    cout<<"sin("<<Dangle<<") = "<<sin(Rangle)<<endl;//Outputs the sin
    cout<<"cos("<<Dangle<<") = "<<cos(Rangle)<<endl;//Outputs the cos
    cout<<"tan("<<Dangle<<") = "<<tan(Rangle);//Outputs the tangent
    
    //Exit stage right or left!
    return 0;
}