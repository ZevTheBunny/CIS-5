/* 
 * File:   main.cpp
 * Author: Daivid Seitz 
 * Created on April 8, 2020, 3:14 PM
 * Purpose: Finds the max of either two or three parameters of type float
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
    float max2 = NULL,//The max of two parementers.
          max3 = NULL;//The max of two parementers.
    //Initialize or input i.e. set variable values
    for (short i = 1; i <=3;i++){//Loops through each input.
        float num;//the current number.
        cout<<"Enter "; //starts imput request.
        switch (i){//Figures out which input it is.
            case 1: cout<<"first ";   break;
            case 2: cout<<"Second "; break;
            case 3: cout<<"third ";   break;
        }
        cout<<"number:"<<endl;//Finsishes input request.
        cin>>num;//Imputs num.

        if (i != 3){// If its not the 3rd pass.
            max2 = num>max2? //checks the max2
                num:max2;
        }
        else{//otherwise checks max3.
            max3 = num > max2?
                num:max2;
        }
        cout<<endl;
        
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Largest number from two parameter function:"<<endl<<max2<<endl<<endl
        <<"Largest number from three parameter function:"<<endl<<max3<<endl;
    //Exit stage right or left!
    return 0;
}

