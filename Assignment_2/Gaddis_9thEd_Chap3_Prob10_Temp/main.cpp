/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 12, 2020, 10:36 AM
 * Purpose:  Converts from Celsius t Farinhiet
 */

//System Libraries
#include <iomanip>   //Input/Output Manipulation Library
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
    float celsius, //The Temperature in celsius.
          farinh;  //The Temperature in Fahrenheit.
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl //Explains programs Function.
        <<"Input Degrees Fahrenheit"<<endl; //Asks for the Temperature in Fahrenheit.
    cin>>farinh; //Takes in the inputs and stores it in farinh.
    //Map inputs -> outputs
    celsius = 5/9.0f * (farinh-32); //Does the conversion math.
    //Display the outputs
    cout<<setprecision(1)<<fixed; //Gets the output ready.
    cout<<farinh<<" Degrees Fahrenheit = "<<celsius<<" Degrees Centigrade"; //Outputs the results.
    //Exit stage right or left!
    return 0;
}