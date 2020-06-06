/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on April 23, 2020, 9:41AM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x; //The size of the shape and largest value counted
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    //Draw the shape
    for (char i = 1; i <= x;i++){
        //draws each row
        for (char j = 1; j<= x;j++){
            switch(shape){
                case 'x':{//If its pattern b.
                    if (x%2==0){
                        if (i==j){//Finds the place to plop a number.
                            cout<<(short)i; //Plops the row row number
                        }
                        else if (x-i+1==j){//Finds the place to plop the other number
                            cout<<x-i+1;//Puts the number from the bottom
                        }
                        else cout<<' ';//Puts a space if its not a spot for a number.
                    }
                    else{
                        if (i==j){//Finds if its a spot to plop the rows from the bottom
                            cout<<x-i+1;//and puts the number of rows from the bottom.
                        }
                        else if (x-i+1==j){//Finds if it is the spot to put the rows from the top
                            cout<<(short)i;//And puts the rows from the top.
                        }
                        else cout<<' ';//Otherwise leaves a blank.
                    }
                    break;
                }
                case 'b':{//If its pattern b.
                    if (x%2==0){
                       if (i==j){//If if its the spot to put a number
                            cout<<(short)i;//It puts the row number from the top.
                        }
                        else cout<<' ';//Otherwise it puts a space. 
                    }
                    else{
                        if (i==j){//If its the spot to put a number
                            cout<<x-i+1;//Puts the number of rows from the bottom.
                        }
                        else cout<<' ';//Otherwise puts a space.
                    }
                    break;
                }
                case 'f':{//If its pattern b.
                    if(x%2==0){
                        if (x-i+1==j){//If its the spot to put a number.
                            cout<<x-i+1;//Puts the number of rows from the bottom.
                        }
                        else cout<<' ';//Otherwise puts a space.
                    }
                    else{
                        if (x-i+1==j){//If it is the spot to put a number.
                            cout<<(short)i;//Puts the number of rows from the top.
                        }
                        else cout<<' ';//Otherwise puts a space.
                    }
                    break;
                }
            }
            
        }
        cout<<endl;
    }

    
    //Exit
    return 0;
}