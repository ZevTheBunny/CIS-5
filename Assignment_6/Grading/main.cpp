/* 
 * File:   main.cpp
 * Author: David Seitz
 * Created on May 28, 2020 at 11:59 AM
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void printGrad(char [], char,float);
void read(char [],char,string);
float  compare(char [],char [],char [], char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const char SIZE =20;//Number of questions on the test.
    char key[SIZE],//The awnser key
         ans[SIZE],//The student's results
         cor[SIZE];//The scored test
    
    float pRight;//The Percentage that is correct
    
    //Initialize or input i.e. set variable values
    read(key,SIZE,"Key");//Reads in the key
    read(ans,SIZE,"Answers");//Reads in the student's test;
    //Score the exam
    pRight = compare(key,ans,cor,SIZE);//Grades the test
    //Display the outputs
    printGrad(cor,SIZE,pRight);//Prints the graded test

    //Exit stage right or left!
    return 0;
}
void printGrad(char correct[],char SIZE, float pRight){//Prints the graed test
    cout<<"C/W     ";//Annonces output
    for (char i = 0; i < SIZE; i++) {cout<<correct[i]<<" ";}//Loops trough all the questions and outputs if it correct or incorrect
    cout<<endl
        <<"Percentage Correct = "<<(pRight*100)<<"%"<<endl;//outputs the score
}
void read(char vals[],char SIZE,string cat){
    string temp;//checks to make sure the user is inputing the right thing
    cin>>temp;
    if(temp == cat){
        for (char i = 0; i<SIZE; i++){//Inputs all the letters
            cin>>vals[i];
        }
    }
}

float compare(char key[], char ans[],char cor[], char SIZE){
    char p = 0;//calculates the p value
    for (char i = 0; i < SIZE;i++){//loops trough all the elements
        cor[i] = key[i] == ans[i]?//if the key and student align,
            'C':'W';//adds a c; otherwise a w
        p += cor[i]=='C'?//if its a c
            1:0;//increases the pvalue
    }
    return (float)p/SIZE;//returns the Percentage correct.
}