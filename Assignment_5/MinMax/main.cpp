/* 
 * Author: David Seitz
 * Created on May 5, 2020 at 11:38 AM
 * Purpose:  Use a function to return min and max of three numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n1,//First number to compare.
        n2,//Secound number to compare.
        n3,//Third number to compare.
        min,//Min value to be found
        max;//Maximum value to be found.
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;//Prompts input.
    cin>>n1>>n2>>n3;//Takes in n1,n2, and n3.
    //Process/Map inputs to outputs
    minmax(n1,n2,n3,min,max);//Calls minmax to find min and max.
    //Output data
    cout<<"Min = "<<min<<endl
        <<"Max = "<<max;
    //Exit stage right!
    return 0;
}
void minmax(int n1, int n2, int n3, int& min,int& max){
    if (n1 > n2){//If n1 is more than n2, sets min to n2 and max to n1;
        min = n2;
        max = n1;
    }
    else{//otherwise sets min to n1 and max to n2.
        min = n1;
        max = n2;
    }
    if (n3 > max){//If n3 is greater than the max between the first two numbers makes max n3;
        max = n3;
    }
    else if (n3 < min){//otherwise if n3 is smaller than the min of the first two, makes min n3.
        min = n3;
    }
    
}