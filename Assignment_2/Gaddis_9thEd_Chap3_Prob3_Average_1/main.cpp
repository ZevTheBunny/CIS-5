/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 10, 2020, 12:36 PM
 * Purpose:  Finds the average of 5 test scores.
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
        int numScores=5; //The number of scores to average.
    float sum,  //The sum of all the values.
          avrg; //The average vaule of the scores
    //Initialize or input i.e. set variable values
   cout<<"Input 5 numbers to average.\n"; //Tells the user what is wanted
    for (int i = 0; i <numScores;i++) //Asks for all the scores and adds them up
    {
        float temp; //temporary varible is declared to store a score
        cin>>temp;  //score is put into temp
        sum +=temp; //score is added into the sum
    }
    //Map inputs -> outputs
    avrg=sum/numScores; //finds the average
    //Display the outputs
    cout<<"The average = "<<setprecision(1)<<fixed<<avrg; //Displays results

    //Exit stage right or left!
    return 0;
}