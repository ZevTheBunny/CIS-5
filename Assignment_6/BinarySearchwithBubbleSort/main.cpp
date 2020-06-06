/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on January 1, 2020 at 11:36 PM
 * Purpose:  find index with buble sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}
void fillAry(int array[],int SIZE){//fills the array
    for (char i = 0; i < SIZE;i++){//loops through all the elements
        cin>>array[i];//and fills them with the inputs
    }
}
void  prntAry(int test[],int size,int peRow){
    for (int i = 0; i < size; i++){//Loops trough all elements.
        if (i%peRow==0 && i != 0) cout<<endl;//If its the end of a line adds a linebreak.
        cout<<test[i]<<" ";//Outputs the element.
    }
    cout<<endl<<endl;//Adds the final linebreak.
}
void bublSrt(int array[],int SIZE){//sorts the array
    bool done = false;//keeps track if its doen
    while (!done){//while it is not sorted
        done = true;//sets done to true
        for (int i = 0; i < SIZE-1; i++){//checks every value
            if (array[i] > array[i+1]){//if the current value is greater than the next one
                //swaps the values
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1]=temp;
                done = false;//sets done to fale

            }
        }
    }
}
bool binSrch(int array[],int SIZE,int val,int& indx){//Does the binary search
    char first = 0,//the first value of the search range
         last = SIZE,//the last value of the search range
         mid;//the comparison point
    while (first <= last){//while first not greater than last
        mid = (first + last)/2;//puts mid half way between first and last.
        if (val < array[mid]) last = mid;//if the value is less than the mid, last becomes mid.
        else if (val > array[mid]) first = mid;//if the value is greater than mid, first becomes mid.
        else{
            indx = mid;//indx becomes min
            return true;
        }
    }
}
