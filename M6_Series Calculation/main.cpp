/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 26, 2020, 3:53PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term,delta;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    fx = 0;
    delta=x;
    //Calculate Sequence sum here
    for (int i = 1; i <=nterms; i++){
        term = 1+(2*(i-1));
        if (term !=1) delta *= (x*x)/(term * (term-1));
        if (i%2==0){
            fx -= delta;
        }
        else{
            fx +=delta;
        }
    }
    
    //Output the result here
    cout<<setprecision(6)<<fixed <<fx<<endl;
    
    //Exit
    return 0;
}