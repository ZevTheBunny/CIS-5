/* 
 * File:   
 * Author: David Seitz
 * Created on May 5, 2020 at 12:08 PM
 * Purpose:  Adds some time
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
    unsigned char hours=0,//clock hours
                  mins=0,//clock minutes
                  noon=0,//Am/PM
                  wait=0,//Time to wait.
                  repeat='n';//if it will go again
    //Initialize or input i.e. set variable values
    do{//
        inputs(hours,mins,noon,wait);//takes in the inputs.
        cout<<endl<<"Current time = ";hours<10? cout<<"0":cout<<"";cout<<(short)hours<<":";mins<10? cout<<"0":cout<<"";cout<<(short)mins<<" "<<noon<<"M";//Displays the current time
    //Map inputs -> outputs
        calWait(hours,mins,noon,wait);//calculates the new time
    //Display the outputs
        cout<<endl<<"Time after waiting period = ";hours<10? cout<<"0":cout<<"";cout<<(short)hours<<":";mins<10? cout<<"0":cout<<"";cout<<(short)mins<<" "<<noon<<"M"<<endl;//displays the new time
        cout<<endl<<"Again:"<<endl;//Asks if the user wants to go again.
        cin>>repeat;//takes in respone
        if(repeat=='y')cout<<endl;//if they want to go again adds a line break
    }while (repeat =='y');//and repeats.
    //Exit stage right or left!
    return 0;
}
void inputs(unsigned char &hours,unsigned char &mins,unsigned char &noon,unsigned char &wait){
    short temp;//Inputs the charecters as shorts
    cout<<"Enter hour:"<<endl;
    cin>>temp;//Takes in input,
    hours = temp;//and stores it in hours.
    cout<<endl<<"Enter minutes:"<<endl;
    cin>>temp;//Takes in input,
    mins = temp;//and stores it in mins.
    cout<<endl<<"Enter A for AM, P for PM:"<<endl;
    cin>>noon;//Takes in input and stores it in noon.
    cout<<endl<<"Enter waiting time:"<<endl;
    cin>>temp;//Takes in input,
    wait = temp;//and stores it in wait.
}
void calWait(unsigned char &hours,unsigned char &mins,unsigned char &noon,unsigned char wait){
    mins += wait;//Adds the wait to mins.
    while (mins >= 60){//Ticks up hours when needed.
        mins -= 60;//Takes 60 off mins
        if(hours==11){//If hours will go past 12
            noon = noon == 'A'?//Swaps noon
                'P':'A';
        }
        else if (hours == 12){//othes if it will it will go to 13
            hours = 0;//sets hours to 0
        }
        hours ++;//and adds 1.
    }
}

