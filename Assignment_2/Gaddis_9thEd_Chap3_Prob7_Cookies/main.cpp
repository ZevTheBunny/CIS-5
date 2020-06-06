/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 10, 2020, 12:36 PM
 * Purpose:  Finds the amount of cookie calories someone has eaten
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
    unsigned char servSiz = 4;//Number of cookies in a serving.
    unsigned short servCal =300;//Number of calories in a serving.
    unsigned long cokEat; //Number of cookies eaten
    unsigned long cals;
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";//Asks for the number of cookies eaten
    cin>>cokEat;//takes in the amount of cookies eaten
    //Map inputs -> outputs
    cals = cokEat *(servCal/servSiz); //calculates the amount of calories in all those cookies. 
    //Display the outputs
    cout<<"You consumed "<<cals<<" calories.";//outputs results.
    //Exit stage right or left!
    return 0;
}