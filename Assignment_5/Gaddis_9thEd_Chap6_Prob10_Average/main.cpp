/* 
 * File:   
 * Author: David Seitz
 * Created on May 12, 2020 at 10:42 AM
 * Purpose:  Finds the average of the top 4 test scores
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    int s1,s2,s3,s4,s5;//The five test scores.
    //Initialize or input i.e. set variable values
    cout<<"Find the Average of Test Scores"<<endl//Displays perpose.
        <<"by removing the lowest value."<<endl;
    getScre(s1,s2,s3,s4,s5);//Takes input.
    //Map inputs -> outputs
    //Display the outputs
    cout<<setprecision(1)<<fixed;//sets up output.
    cout<<"The average test score = "<<calcAvg(s1,s2,s3,s4,s5);//Display results.
    //Exit stage right or left!
    return 0;
}

void getScre(int &s1,int &s2,int &s3,int &s4,int &s5){
    cout<<"Input the 5 test scores."<<endl;//Prompts input
    cin>>s1>>s2>>s3>>s4>>s5;//takes in inputs
    if (1<s1>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s2>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s3>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s4>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s5>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
}

float calcAvg(int s1,int s2,int s3,int s4,int s5){
    float sum = s1+s2+s3+s4+s5 - fndLwst(s1,s2,s3,s4,s5);//Finds the sum and remvomes the lowest.
    
    return sum/4.0f;//then takes the average of the remaing 4
}

int fndLwst(int s1,int s2,int s3,int s4,int s5)
{
    int min = s1;//the lowest checked value, starts at s1
    min = min > s2?//if s2 is less than the current lowest value it becomes the current lowest value
        s2:min;
    min = min > s3?//if s3 is less than the current lowest value it becomes the current lowest value
        s3:min;
    min = min > s4?//if s4 is less than the current lowest value it becomes the current lowest value
        s4:min;
    min = min > s5?//if s5 is less than the current lowest value it becomes the current lowest value
        s5:min;
    return min;//returns whichever was found to be lowest/
}