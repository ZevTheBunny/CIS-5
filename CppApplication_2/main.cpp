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
    float x,fx,term;
    int nterms;
    
    //Input or initialize values Here
cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    fx = 0;
    
    //Calculate Sequence sum here
    for (int i = 1; i <=nterms; i ++){
        float power = 1;
        unsigned long long factorial=1;
        term = 1+(2*(i-1));
        //cout<<i<<endl;
        //cout<<term<<endl;
        power = pow(x,term);
        for (int j = term; j > 0; j--){
            factorial *=j;
        }
       // power = pow(x,term/factorial);
        if (i%2==0){
            fx -= power / factorial;
        }
        else{  
            fx +=power/factorial;
        }
        
           // cout<<setprecision(6)<<fixed <<fx<<endl;

        //cout<<power/factorial<<endl;
        //cout<<power<<" "<<factorial<<endl;
    }
    
    //Output the result here
    //cout<<fx-sin(x)<<endl;
    //cout<<sin(x)<<endl;
    cout<<setprecision(6)<<fixed <<fx<<endl;
    
    //Exit
    return 0;
}