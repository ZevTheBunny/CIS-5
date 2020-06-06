/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 12:27 PM
 * Purpose:  Finds item inflation rate.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/Output manipulation Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const char CNVCENT = 100;//Constant number equalt to 100.
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float cPrice,//The current price.
          pPrice,//The past price.
          inflat;//The inplation rate.
    char repeat;//weather or not it repeats
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;//Asks for current price,
        cin>>cPrice;//then takes in current price.
        cout<<"Enter year-ago price:"<<endl;//Asks for old price,
        cin>>pPrice;//then takes in old price.
    //Map inputs -> outputs
        inflat = cPrice/pPrice - 1;//Calculated inlattion.
        inflat *=CNVCENT;//Make inflation a perectage.
    //Display the outputs
        cout<<setprecision(2)<<fixed;//Gets output ready.
        cout<<"Inflation rate: "<<inflat<<"%"<<endl<<endl;//Outputs inflation rate.
        cout<<"Again:"<<endl;//Asks if the user wants to go again.
        cin>>repeat;
        if (repeat =='y') cout<<endl;//Cleans up endl.
    }while(repeat =='y');//Goes again?
    //Exit stage right or left!
    return 0;
}