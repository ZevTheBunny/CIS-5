/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 26, 2020, 11:17 AM
 * Purpose:  Figures out the result of a game of rock paper scissors.
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
    char p1,p2; //Charecters holding the value of the 2 player's Choices.
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl //Announces the programes Function.
        <<"Input Player 1 and Player 2 Choices"<<endl;//Asks the user for inputs.
    cin>>p1>>p2;//Recives inputs, storing the first one in p1 and the secound one in p2.
    //Map inputs -> outputs
    switch (p1) //Checks what letter is in p1 and converts it to a number value used to calculate results.
    {
        case 'R': case 'r': //If rock,
            p1=1;           //sets p1 to 1.
            break;
        case 'P': case 'p': //If paper,
            p1=2;           //sets p2 to 2.
            break;
        case 'S': case 's': //If scissors,
            p1 = 5;         //sets p1 to 5,
            break;
        default: //If it is not a valid respose,
            cout<<"You did not give a valid input, please enter R P or S"; //tells the user to fix it.
            
    }
    switch (p2) //Checks what letter is in p2 and converts it to a number value used to calculate results.
    {
        case 'R': case 'r': //If rock,
            p2=1;           //sets p2 to 1.
            break;
        case 'P': case 'p': //If paper,
            p2=2;           //sets p2 to 2.
            break;
        case 'S': case 's': //If scissors,
            p2 = 5;         //sets p2 to 5.
            break;
        default:                                                          //If it is not a valid respose,
            cout<<"You did not give a valid input, please enter R P or S";//tells the user to fix it.
    }
    //Display the outputs
    switch (p1 -p2) //Figures out the results.
    {
        case 0: //If they playerd the same thing,
            cout<<"Nobody wins.";//Displays that Nobody won.
            break;
        case 1: case -1://If paper was played against rock,
            cout<<"Paper covers rock.";//outputs that paper won.
            break;
        case 4: case -4: //If rock was played against scissors,
            cout<<"Rock breaks scissors.";//outputs that rock one.
            break;
        case 3: case -3://If scissors was played against paper,
            cout<<"Scissors cuts paper.";//outputs that scissors won.
            break;
    }
    //Exit stage right or left!
    return 0;
}