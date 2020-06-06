/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 12, 2020, 12:38 PM
 * Purpose:  Calculates new pay.
 */

//System Libraries
#include <iomanip>   //Input/Output Maniplation Library
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
 
    //Declare Variables
    int prevSal; //The salary before the increase
    float incrRat=0.076f,//The rate of the inclease
          newSal;//the new salary
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;//Asks for the previous salary.
    cin>>prevSal;//Takes in the input and assains it to prevSal.
    //Map inputs -> outputs
    newSal = prevSal *(1+incrRat); //Calculates the new salary
    //Display the outputs
    cout<<setprecision(2)<<fixed;//Gets ready to format outps
    cout<<"Retroactive pay    = $"<<setw(7)<<(newSal-prevSal)/2.0f<<endl//Outputs the Retroactive pay.
        <<"New annual salary  = $"<<setw(7)<<(newSal)<<endl //Outputs the new salary
        <<"New monthly salary = $"<<setw(7)<<newSal/12;//Outputs the new monthly pay
    //Exit stage right or left!
    return 0;
}
