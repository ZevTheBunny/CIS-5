/* 
 * File:   
 * Author: David Seitz
 * Created on May 6, 2020 at 4:28 PM
 * Purpose:  Converts from 24hour time to 12hour time
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void cnvtTime(unsigned short, unsigned short);
//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    unsigned short hour,//The hours
                   minute;//the minutes
    char repeat;//If it will repeat
    //Initialize or input i.e. set variable values
    cout<<"Military Time Converter to Standard Time"<<endl//States perpose.
        <<"Input Military Time hh:mm"<<endl;//Prompts input.
    do{//does the stuff
        cin>>hour;//takes in hours
        cin.ignore();//skips the ':''
        cin>>minute;//takes in minutes
    //Map inputs -> outputs
    
    //Display the outputs
        hour<10?cout<<"0":cout<<"";cout<<hour<<":"<<minute;//outputs the mulitart time
        cnvtTime(hour,minute);//Outputs the 12 hour time.
        cout<<"Would you like to convert another time (y/n)"<<endl;//asks if they want to go again.
        cin>>repeat;//takes in respone/
    }while(repeat=='y' || repeat =='Y');//if repeat is not y stops doing the stuff.
    //Exit stage right or left!
    return 0;
}
void cnvtTime(unsigned short hour, unsigned short minute){
    if(minute<60 && hour<25){//validates input.
        cout<<" = ";
        if (hour >=12) {//If its afternoon
            hour ==12?//if it is noon
                cout<<"12"://outputs 12
                cout<<hour-12;//otherwise outputs the time after noon.
            cout<<":"<<minute<<" PM"<<endl;//then minutes and PM
        }
        else{//otherwise if its AM
            hour == 0?//If its midnight
                cout<<"12:"<<minute<<" AM"<<endl://outputs 12:min: AM
                cout<<hour<<":"<<minute<<" AM"<<endl;//otherwise outputs the time after midnight
        }
    }
    else cout<<" is not a valid time"<<endl;//If its not a proper time complains to the user.
        
    }