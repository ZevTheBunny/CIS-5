/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 10:30 AM
 * Purpose:  Finds the smalest and largest inputs.
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
    int input, //Stores the current input.
        min =  2147483647, //The current smallest value, starts at largest possible value so the first input will always be less.
        max = -2147483648; //The current largest value, starts at the smallest possible value so that the first input is always more.
    //Initialize or input i.e. set variable values
    cin>>input; //Takes in the fist input before the loop.
    do //Does the loop.
    {
        min = input < min? //If the input is less than our current smallest value,
            input: //it makes the input the smallest value:
            min; //otherwise it keeps the current min value.
        max = input > max? //If the input is more than our current max,
            input: //it makes the input the max value,
            max;   //otherwise it keeps the current max.
        cin>>input;
        
    } while (input != -99); //Does the loop until -99 is inputed.
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl //Dispays output,
        <<"Largest  number in the series is "<<max;      //then more output.
    //Exit stage right or left!
    return 0;
}