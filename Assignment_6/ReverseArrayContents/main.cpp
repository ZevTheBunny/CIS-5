/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on May 28, 2020 at 11:00 AM
 * Purpose:  Reverses the order of an array
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=50;//Size of the array.
    int test[SIZE];//The array.
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);//Takes in the array.
    
    //Reverse the Values
    revrse(test,SIZE);//Reveres the array.

    //Display the outputs
    print(test,SIZE,10);//Displays the array.

    //Exit stage right or left!
    return 0;
}
void  init(int test[],int size){
    for (int i = 0; i < size; i++){//Loops through all elements,
        cin>>test[i];//and assigns inputs to the elements.
    }
}
void  print(int test[],int size,int peRow){
    for (int i = 0; i < size; i++){//Loops trough all elements.
        if (i%peRow==0 && i != 0) cout<<endl;//If its the end of a line adds a linebreak.
        cout<<test[i]<<" ";//Outputs the element.
    }
    cout<<endl;//Adds the final linebreak.
}
void  revrse(int test[],int size){
    int temp[size];//The flipped array.
    for (int i = 0; i < size; i++){//Loops trough all elements.
        temp[i] = test[size-i-1];//The i from the first value of temp become the i from last value of test.
    }
    for (int i = 0; i <size; i++){//Makes test temp.
        test[i] = temp[i];
    }
}