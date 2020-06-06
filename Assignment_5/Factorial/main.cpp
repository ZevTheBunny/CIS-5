/* 
 * Author: David Seitz
 * Created on May 5, 2020 at 11:43 AM
 * Purpose:  Calculates factorial of a given input.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;//The number to find the factorial of.
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl//States program's Purpose.
        <<"Input the number for the function."<<endl;//Asks for input.
    cin>>n;//Takes in user input for n.
    //Process/Map inputs to outputs
    
    //Output data
    cout<<n<<"! = "<<fctrl(n);//Calculates factorial and output results.
    //Exit stage right!
    return 0;
}
int fctrl(int n){//Uses recersion for calculate the factorial.
    return n > 1?//its not on 1
        n * fctrl(n-1)://Returns the n * the factorial of n-1;
        1;//if n is 1 Returns one.
}