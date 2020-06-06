/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 29, 2020, 9:19 PM
 * Purpose:  Sees if horiscope signs are compatible
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string sign1,
           sign2,
           elm1,
           elm2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl
        <<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    //Map inputs -> outputs
    if (sign1=="Taurus"||sign1== "Virgo"||sign1== "Capricorn"){
        elm1 = "Earth";
    }
    else if (sign1== "Gemini"||sign1== "Libra"||sign1== "Aquarius"){
        elm1 = "Air";
    }
    else if (sign1=="Cancer"||sign1=="Scorpio"||sign1=="Pisces"){
        elm1 = "Water";
    }
    else if (sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius"){
        elm1 = "Fire";
    }
    
    if (sign2=="Taurus"||sign2== "Virgo"||sign2== "Capricorn"){
        elm2 = "Earth";
    }
    else if (sign2== "Gemini"||sign2== "Libra"||sign2== "Aquarius"){
        elm2 = "Air";
    }
    else if (sign2=="Cancer"||sign2=="Scorpio"||sign2=="Pisces"){
        elm2 = "Water";
    }
    else if (sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius"){
        elm2 = "Fire";
    }
    //Display the outputs
    elm1==elm2?
        cout<<sign1<<" and "<<sign2<<" are compatible "<<elm1<<" signs.":
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    //Exit stage right or left!
    return 0;
}