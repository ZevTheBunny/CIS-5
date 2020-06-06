/* 
 * File:   
 * Author: David Seitz
 * Created on May 5, 2020 at 12:16 PM
 * Purpose:  Finds intital balance needed for target future balance.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float psntVal(float, unsigned char, unsigned char);
//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float f;//Future value
    unsigned short n,//period
                  r;//intrest rate
    //Initialize or input i.e. set variable values
    cout<<"This is a Present Value Computation"<<endl//states Purpose
        <<"Input the Future Value in Dollars"<<endl;//Props input of target val
    cin>>f;//takes in input
    cout<<"Input the Number of Years"<<endl;//Prompts input of period.
    cin>>n;//takes in period.
    cout<<"Input the Interest Rate %/yr"<<endl;//Prompts input of intrest rate,
    cin>>r;//and takes in intrest rate.
    //Map inputs -> outputs
    //Display the outputs
    cout<<setprecision(2)<<fixed;//Prepares outputs.
    cout<<"The Present Value = $"<<psntVal(f,n,r);//Outputs the required present value.
    //Exit stage right or left!
    return 0;
}
float psntVal(float f, unsigned char n, unsigned char r){
    return f/(float)(pow((1+r/100.0f),n));//returns the result of the present value formula.
}
