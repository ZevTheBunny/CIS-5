/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on Marh 29, 2020, 7:41PM
 * Purpose:  Althabitises names
 */

//System Libraries
#include <string>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string name1,
           name2,
           name3;
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl
        <<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    //Map inputs -> outputs
    
    //Display the outputs
    if(name1<name2&&name2<name3){ //1 2 3
        cout<<name1<<endl
            <<name2<<endl
            <<name3;
    }
    else if(name1<name2&&name1<name3){ //1 3 2 
        cout<<name1<<endl
            <<name3<<endl
            <<name2;
    }
    else if(name2<name3&&name1<name3){ //2 1 3 
        cout<<name2<<endl
            <<name1<<endl
            <<name3;
    }
    else if(name2<name3&&name3<name1){ //2 3 1 
        cout<<name2<<endl
            <<name3<<endl
            <<name1;
    }
    else if(name3<name2&&name2<name1){ //3 2 1 
        cout<<name3<<endl
            <<name2<<endl
            <<name1;
    }
    else if(name3<name1&&name1<name2){ //3 1 2 
        cout<<name3<<endl
            <<name1<<endl
            <<name2;
    }
    //Exit stage right or left!
    return 0;
}
