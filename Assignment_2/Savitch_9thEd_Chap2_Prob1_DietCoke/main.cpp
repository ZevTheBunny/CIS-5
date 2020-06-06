/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 12, 2020, 12:17 PM
 * Purpose:  calculates how much diet soda will kill my friend
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float Gramify(float &mass)
{
    mass /=100;
    mass *= 45359.2 ;
    return mass;
}
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    char mosKill = 5,//The grams of artifial sweeter needed to kill a rat.
         mosMass = 35;//The mass of a a rat in grams.
    short canMass =350;//The mass of the can in grams.
    float desWeih,//The desired weight at the end of the diet.
          kilRati,//The percent of someone weight needed to be killed by the substance
          deathCn,//amount of cans that is leathal
          canLevl = 0.001f;//the amout of the can that is death death in a can.
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl //Displays the perpose of the Program
        <<"Input the desired dieters weight in lbs."<<endl;//Asks the user to Input their desired  weight.
    cin>>desWeih;// Takes in the Input and stores it in desWieh.    
    //Map inputs -> outputs
    Gramify(desWeih);//Converts the target weight to grams
    kilRati = (float)mosKill/mosMass;//finds kilRati as explained in decleration
    deathCn = kilRati *desWeih;// Finds the grams of death needed to kill the target
    deathCn /= canLevl *(float)canMass;//Finds how many cans are needed to get that much death
    //Display the outputs
    
    cout<<"The maximum number of soda pop cans"<<endl 
        <<"which can be consumed is "<<(int)deathCn<<" cans";//outputs stuff
    //Exit stage right or left!
    return 0;
}