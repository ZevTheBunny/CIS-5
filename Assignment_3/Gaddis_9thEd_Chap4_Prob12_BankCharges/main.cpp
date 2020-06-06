/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on March 29, 2020, 8:22 PM
 * Purpose:  Calculates Bank Charges
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float bal,
          fee;
    unsigned short checks;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl
        <<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bal>>checks;

    //Map inputs -> outputs
    if (checks < 0){
        cout<<"Invalid amount of checks";
    }
    switch(checks){
        case 0 ... 19:
            fee = .1f *checks;
            break;
        case 20 ... 39:
            fee = .08f *checks;
            break;
        case 40 ... 59:
            fee = .06f *checks;
            break;
        default:
            fee = .04f *checks;
            break;
    }
    //Display the outputs
    char w = 8;
    cout<<setprecision(2)<<fixed;
    cout<<"Balance     $ "<<setw(w)<<bal<<endl
        <<"Check Fee   $ "<<setw(w)<<fee<<endl
        <<"Monthly Fee $ "<<setw(w)<<"10.00"<<endl;
    bal <=400?
            cout<<"Low Balance $ "<<setw(w)<<"15.00"<<endl
                <<"New Balance $ "<<setw(w)<<bal - fee - 10 - 15:
            cout<<"Low Balance $ "<<setw(w)<<"0.00"<<endl
                <<"New Balance $ "<<setw(w)<<bal - fee - 10;
    
    
    //Exit stage right or left!
    return 0;
}