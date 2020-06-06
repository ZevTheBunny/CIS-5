/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on May 28, 2020 at 12:34 AM
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
bool linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=100;//The number of elements
    int array[SIZE];//the array
    int indx,val;//the desired indx of the desired value and the desired value
    
    //Initialize or input i.e. set variable values
    val=50;//establishes 50 as desired value.
    fillAry(array,SIZE);//fills the array
    
    //Display the outputs
    if(linSrch(array,SIZE,val,indx))//prints the output.
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}
void fillAry(int array[],int SIZE){//fills the array
    for (char i = 0; i < SIZE;i++){//loops through all the elements
        cin>>array[i];//and fills them with the inputs
    }
}

bool linSrch(int array[],int SIZE,int val,int &indx){//does a linear search
    for (char i = 0; i < SIZE;i++){//loops through all the elemens
        if (array[i] == val){//if it finds the value
            indx = i;//sets the indx to the index
            return true;//leaves the function returning true
        }
    }
    return false;//returns false if the value was not found.

}