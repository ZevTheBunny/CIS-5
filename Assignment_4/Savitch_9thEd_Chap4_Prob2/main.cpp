/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 7, 2020, 12:02 PM
 * Purpose:  Calculates mpg for two cars
 */
//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/Output manipulation Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVLITER = 0.264179;  //Conversions rate from gallons to liters.
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short liters, //The liters of gas used.
          miles;//The miles traveled.
    float compare= 0,//the first cars mpg.
          mpg;//The miles per gallon.
    char repeat;//Weather or not the program will repeat.
    //Initialize or input i.e. set variable values
    do{ 
    compare = 0;//resets compare.
    for (short i = 1; i <=2;i++){
    cout<<"Car "<<i<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl; //Asks for liters
    cin>>liters;                                             //and takes in liters.
    cout<<"Enter number of miles traveled:"<<endl; //Asks for miles
    cin>>miles;//and takes in miles.
    //Map inputs -> outputs
    mpg = (float)miles/liters; //Finds the mpl.
    mpg /=CNVLITER; //converts to mpg.
    
    //Display the outputs
    cout<<setprecision(2)<<fixed;//gets output ready.
    cout<<"miles per gallon: "<<mpg<<endl<<endl;//outputs results.
    if (i==2){//If it is the secound car.
    mpg > compare?//if mpg is more than car 1 mpg
        cout<<"Car 2 is more fuel efficient"<<endl<<endl://says car2 is more efficient,
        cout<<"Car 1 is more fuel efficient"<<endl<<endl;//otheerwise car1 is more efficient.
    }
    else{//if it was the first car,
       compare = mpg;//compare becomes mpg.
    }
    }
    cout<<"Again:"<<endl;//Asks if they want go again.
    cin>>repeat;//gets the repeat input.
    if (repeat == 'y') cout<<endl;//Checks for the endl.
    }while (repeat == 'y');//If they put y it goes again.
    //Exit stage right or left!
    return 0;
}