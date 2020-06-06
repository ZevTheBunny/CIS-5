/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on May 28, 2020 at 11:19 AM
 * Purpose:  Reverses the order of an array
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  initSD(float [],int);//Initialize the array
void  printSD(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int,float);//Calculate the standard deviation
float sumX(float [],int);//Calculate the Sum
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=20;//The number of elements in the sample.
    float test[SIZE];//The sample
    
    //Initialize or input i.e. set variable values
    initSD(test,SIZE);//Fills the array
    
    //Display the outputs
    printSD(test,SIZE,7);//Prints the array

    //Exit stage right or left!
    return 0;
}
void  initSD(float test[],int SIZE){//Fills the array
    for (char i = 0;i < SIZE;i++){//Goes trough all the elements
        cin>>test[i];//and puts input into the array.
    }
}
void  printSD(float test[],int SIZE,int places){//Prints the array
    float mean = avgX(test,SIZE),//the mean
          dist = stdX(test,SIZE,mean);//the standard distribution
    cout<<setprecision(places)<<fixed;
    cout<<"The average            = "<<mean<<endl;
    cout<<"The standard deviation = "<<dist<<endl; 
}
float avgX(float test[],int SIZE){//finds the average
    return sumX(test,SIZE)/SIZE;
}
float stdX(float test[],int SIZE, float mean){//finds the standard deviation
    float sum=0;
    for (char i = 0;i < SIZE;i++){
        sum += pow(test[i]- mean,2);
    }    
    return sqrt(sum/(SIZE-1));
}
float sumX(float test[],int SIZE){//finds the sum
    float sum=0;
    for (char i = 0;i < SIZE;i++){
        sum += test[i];
    }
    return sum;
}