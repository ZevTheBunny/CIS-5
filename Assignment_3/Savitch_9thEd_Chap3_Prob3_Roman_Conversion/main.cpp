/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 29, 2020, 9:00 PM
 * Purpose:  Converts to roman numerals
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
    short year,
          n1,
          n10,
          n100,
          n1000;
    string out;    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl
        <<"Input the integer to convert."<<endl;
    cin>>year;
    n1 = year % 10;
    n10 = year/10 % 10;
    n100 = year/100 % 10;
    n1000 = year/1000 % 10;
    if (!(year >=1000 && year <=3000))
    {
        cout<<year<<" is Out of Range!";
        exit(0);
    }
    //Map inputs -> outputs
    switch(n1000){
        case 3:
            out +="M";
        case 2:
            out +="M";
        case 1:
            out +="M";
    }
    switch(n100){
        case 9:
            out += "CM";
            break;
        case 8:
            out += "DCCC";
            break;
        case 7:
            out += "DCC";
            break;
        case 6:
            out +="DC";
            break;
        case 5:
            out +="D";
            break;
        case 4:
            out += "CD";
            break;
        case 3:
            out += "CCC";
            break;
        case 2:
            out += "CC";
            break;
        case 1:
            out += "C";
            break;
    }    switch(n10){
        case 9:
            out += "XC";
            break;
        case 8:
            out += "LXXX";
            break;
        case 7:
            out += "LXX";
            break;
        case 6:
            out +="LX";
            break;
        case 5:
            out +="L";
            break;
        case 4:
            out += "XL";
            break;
        case 3:
            out += "XXX";
            break;
        case 2:
            out += "XX";
            break;
        case 1:
            out += "X";
            break;
    }    switch(n1){
        case 9:
            out += "IX";
            break;
        case 8:
            out += "VIII";
            break;
        case 7:
            out += "VII";
            break;
        case 6:
            out +="VI";
            break;
        case 5:
            out +="V";
            break;
        case 4:
            out += "IV";
            break;
        case 3:
            out += "III";
            break;
        case 2:
            out += "II";
            break;
        case 1:
            out += "I";
            break;
    }
    //Display the outputs
    cout<<year<<" is equal to "<<out;
    //Exit stage right or left!
    return 0;
}