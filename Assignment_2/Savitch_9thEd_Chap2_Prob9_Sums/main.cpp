/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 17, 2020, 10:36 AM
 * Purpose:  Finds the sum of 10 numbers, also finds the sum of all the postive and negive numbers if your into that.
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

    //Declare Variables
    unsigned char numOnum = 10; //The amount of inputs.
    int posSum, //The sum of all the postive numbers.
        negSum, //The sum of all the negive inputs.
        totSum; //The total sum of all the inputs.
    //Initialize or input i.e. set variable values
    posSum = negSum = totSum = 0; //Sets posSum, negSum and totSum to 0 to avoid wacky numpers.
    //Map inputs -> outputs
    cout<<"Input "<<(short)(numOnum)<<" numbers, any order, positive or negative"<<endl; //Asks for inputs.
    for (int i = 0; i<numOnum;i++) //Runs the incloded code a number of times equivlent to the value of numOnum.
    {
        int x; //Makes a local int (x) to hold individual inputs/
        cin>>x; //Shoves a inputed value into x.
        x>0? //Checks if x is greater than 0
            posSum += x://If x is greater than 0 its value is added to the posSum variable,
            negSum += x;//Otherwise it gets added to negSum.
    }
    totSum = negSum+posSum; //Adds the two signed sums together to find the total sum.
    //Display the outputs
    char w =4;//I don't want to have a hard number floating around in the code so this is the number that goes in the setws.
    cout<<"Negative sum ="<<setw(w)<<negSum<<endl//Outputs the Negative sum,
        <<"Positive sum ="<<setw(w)<<posSum<<endl//then the postive sum,
        <<"Total sum    ="<<setw(w)<<totSum;     //and finally the total sum.
    //Exit stage right or left!
    return 0;
}