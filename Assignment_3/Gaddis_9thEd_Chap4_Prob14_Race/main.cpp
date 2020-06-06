/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 34, 2020, 10:40 AM
 * Purpose:  Rank the race
 */

//System Libraries
#include <string>
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    string n1,
           n2,
           n3;
    short t1,
        t2,
        t3;
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl
        <<"Input 3 Runners"<<endl
        <<"Their names, then their times"<<endl;
    cin>>n1>>t1;
    cin>>n2>>t2;
    cin>>n3>>t3;
    //Map inputs -> outputs

    //Display the outputs
    if(t1<t2&&t2<t3){ //1 2 3
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3;
    }
    else if(t1<t2&&t1<t3){ //1 3 2 
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2;
    }
    else if(t2<t3&&t1<t3){ //2 1 3 
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3;
    }
    else if(t2<t3&&t3<t1){ //2 3 1 
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1;
    }
    else if(t3<t2&&t2<t1){ //3 2 1 
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1;
    }
    else if(t3<t1&&t1<t2){ //3 1 2 
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2;
    }
    //Exit stage right or left!
    return 0;
}
