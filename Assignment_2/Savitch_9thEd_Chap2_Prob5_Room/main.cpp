/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 17, 2010, 10:47 AM
 * Purpose:  Helps people know if they will be obeying fire code and how they can ajust  things.
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
    unsigned short roomCap, //The amount of people the fire department wants in a room.
                   roomOcu; //The amount of people you want in the foom.
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl; //Asks for inputs.
    cin>>roomCap //inputs the room capacity and puts that in roomCap.
       >>roomOcu;//inputs your desired room amount of people and puts in roomOcu.
    //Map inputs -> outputs
    
    //Display the outputs
    roomOcu > roomCap? //Sees if there is a discrepincy between the wants of you and the fire department.
        cout<<"Meeting cannot be held."<<endl //If you want more people then fire code allows it informs you that you may not hold the meeting
            <<"Reduce number of people by "<<roomOcu-roomCap<<" to avoid fire violation.": //and tells you how many people you will have to exclude to be allowed in.
        cout<<"Meeting can be held."<<endl //Otherwise it informs you that your meeting is A-Ok,
            <<"Increase number of people by "<<roomCap-roomOcu<<" will be allowed without violation.";// it then goes ahead a lets you know how many more people you can invite.
        

    //Exit stage right or left!
    return 0;
}