/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 26, 2020, 10:48 AM
 * Purpose:  Calculates someones internet bill
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char package;  //The package the user has selected.
    unsigned short hours; //The amount of hours the user has used the user's internet.
    float fee; //the amount the user will owe.
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl 
        <<"Input Package and Hours"<<endl;
    cin>>package>>hours; //Inputs the package abd hours
    //Map inputs -> outputs
    if (hours >744) //Checks if the time is possible
    {
        cout<<"You did not enter a valid time, there are only 744 hours in a 31 day month, it is impossible for someone to have used this much internet.";
        exit(0);
    }
    switch (package)  //Checks what package someone bought.
    {
        case 'A': //If they are using package A,
            fee = hours<=10? //it checks if they went over the limit;
                9.95f: //if not it will set their fee to the default 9.95 of plan A,
                9.95f+ 2*(hours-10);//but if they did go over it will calculate and apply overcharge.
            break;
        case 'B'://If they are using package B, 
            fee = hours<=20? //it checks if they went over the limit;
                14.95f://if not it will set their fee to the default 14.95 of plan B,
                14.95f+ 1*(hours-20);//but if they did go over it will calculate and apply overcharge/
            break;
        case 'C'://If they are using package C,
            fee = 19.95;//It sets the fee to 19.95 regardless of how much time they used, becuse time matters not for an unlimited plan.
            break;
        default://If they entered a package that was not A B or C it tells them and escapes the program.
            cout<<"You did not enter a valid package, please choose A B or C"; 
            exit(0);
    }
    //Display the outputs
    cout<<"Bill = $ "<<fee; 
    //Exit stage right or left!
    return 0;
}