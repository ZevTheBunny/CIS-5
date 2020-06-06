/* 
 * File:   
 * Author: David Seitz
 * Created on May 5, 2020 at 12:08 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void inputs(unsigned char&,unsigned char&,unsigned char&,unsigned char&);
void calWait(unsigned char&,unsigned char&,unsigned char&,unsigned char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned char hours=0,
                  mins=0,
                  noon=0,
                  wait=0,
                  repeat='n';
    //Initialize or input i.e. set variable values
    do{
        inputs(hours,mins,noon,wait);
        calWait(hours,mins,noon,wait);
        cout<<endl<<"Time after waiting period = "<<(short)hours<<":"<<(short)mins<<" "<<noon<<"M"<<endl;
        cout<<endl<<"Again:"<<endl;
        cin>>repeat;
    }while (repeat =='y');
    cout<<hours<<" "<<mins<<" "<<noon<<" "<<wait<<" "<<repeat;
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
void inputs(unsigned char &hours,unsigned char &mins,unsigned char &noon,unsigned char &wait){
    short temp;
    cout<<"Enter hour:"<<endl;
    cin>>temp;
    hours = temp;
    cout<<endl<<"Enter minutes:"<<endl;
    cin>>temp;
    mins = temp;
    cout<<endl<<"Enter A for AM, P for PM:"<<endl;
    cin>>noon;
    cout<<endl<<"Enter waiting time:";
    cin>>temp;
    wait = temp;
}
void calWait(unsigned char &hours,unsigned char &mins,unsigned char &noon,unsigned char wait){
    mins += wait;
    while (mins >= 60){
        mins -= 60;
        if(hours==11){
            noon = noon == 'A'?
                'P':'A';
        }
        else if (hours == 12){
            hours = 0;
        }
        hours ++;
    }
}
