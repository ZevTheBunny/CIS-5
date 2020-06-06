/* 
 * Author: David Seitz
 * Created on May 5, 2020 at 11:53 AM
 * Purpose:  Determines if a number is prime.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int x;//The number we want to know is prime.
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;//Prompts for input of x.
    cin>>x;//Takes in user input and puts it in x.
    //Process/Map inputs to outputs
    
    //Output data
    isPrime(x)?//Checks if it is prime.
        cout<<x<<" is prime."://If x is prime says so.
        cout<<x<<" is not prime.";//If x is not prime says so.
    //Exit stage right!
    return 0;
}
bool isPrime(int x){//Determine if the input number is prime.
    for (int i = 2; i <= sqrt(x);i++){//Loops through possible factor canidits.
        if (x%i == 0 ) return false;//Returns false if it finds a factor.
    }
    return true;//If no fator was found returns true.
}