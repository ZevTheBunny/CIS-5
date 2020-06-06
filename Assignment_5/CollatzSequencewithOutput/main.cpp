/* 
 * Author: David Seitz
 * Created on May 5, 2020 at 12:08 PM
 * Purpose:  Same as the Collatz Sequence but output the Sequence as well.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}
int collatz(int n){
    int count = 1;//Keeps track of the collats length.
    while (n != 1){//Goes until 1.
        cout<<n<<", ";//prints term.
        n = n % 2 == 0?
            n/2://If n is even, n is divided by 2.
            n*3 +1;//If n is odd n is muliplyed by 3 and then 1 is added.
        count ++;//Count then goes up.
    }
    cout<<"1"<<endl;//adds 1 and linebreak.
    return count;
}
