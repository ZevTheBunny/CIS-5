/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on June 2, 2020, 8:01 PM
 * Purpose: C++ Template
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
#include <iomanip>   //Format Library
#include <cmath>     //Math Library

using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
const int COLS=6;//Number of collums, you put it here not me.

//Conversions, Higher Dimensions

//Function Prototypes
void dice();
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

void prdTab();
void fillPrdTbl(int [][COLS],int);

void reverse();
void  revrse(int [],int);;//Reverse the array

void standDev();
void  initSD(float [],int);//Initialize the array
void  printSD(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int,float);//Calculate the standard deviation
float sumX(float [],int);//Calculate the Sum

void grade();
void printGrad(char [], char,float);
void read(char [],char,string);
float  compare(char [],char [],char [], char);

void linear();
void fillAry(int [],int);
bool linSrch(int [],int,int,int&);

void binSelsort();
void prntAry(int [],int,int);
void selSrt(int [],int);
bool binSrch(int [],int,int,int&);

void binBublsort();
void bublSrt(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;
    //Variable Initialization
    do{
    cout<<"Please select which program you would like to use:"<<endl
        <<"\t1) Renders the possible sums of 2d6"<<endl
        <<"\t2) Renders the product table for 1-6"<<endl
        <<"\t3) Reverses an array"<<endl
        <<"\t4) Finds the standard devation"<<endl
        <<"\t5) Grades a test"<<endl
        <<"\t6) Performs a linear search"<<endl
        <<"\t7) Performs a binary search with a selection sort"<<endl
        <<"\t8) Performs a binary search with a bubble sort"<<endl
        <<"Enter your selection 1-9: ";     
    cin>>choice;
    cout<<endl<<endl;
    //Mapping Process Inputs to Outputs
    switch (choice){
        case '1':
            dice();
            break;
        case '2':
            prdTab();
            break;
        case '3':
            reverse();
            break;
        case '4':
            standDev();
            break;
        case '5':
            grade();
            break;
        case '6':
            linear();
            break;
        case '7':
            binSelsort();
            break;
        case '8':
            binBublsort();
            break;
    }
    cout<<endl<<endl<<"Would you like to select a diffrent program Y/N: ";
    cin>>choice;
    }while (choice == 'y' || choice == 'Y');
    //Clean Up
    
    //Exit stage right!
    return 0;
}

void dice() {
    //Declare Variables
    const int ROWS=6;//Number of rows.
    int tablSum[ROWS][COLS];//The table.
    
    //Initialize or input i.e. set variable values
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    fillTbl(tablSum,ROWS);//Generates the table.
    
    //Display the outputs
    prntTbl(tablSum,ROWS);//Prints the table.

    //Exit stage right or left!
}
void fillTbl(int tablSum[][COLS],int ROWS){
    for (int i = 0; i <ROWS; i++){//Goes through all the rows.
        for (int j = 0; j<COLS;j++){//Goes through all the collums.
            tablSum[i][j] = i+j+2;//Fills the slots,
        }
    }
}
void prntTbl(const int tablSum[][COLS],int ROWS){
    const char w =4;//The width for spacing between elements.
    cout<<"           C o l u m n s"<<endl//Prints the Colums header.
        <<"     |   1   2   3   4   5   6"<<endl
        <<"----------------------------------"<<endl;
    for (int i = 0; i <ROWS; i++){//Loops trough all the rows.
        switch (i+1){//Prints the Row Headers
            case 1:
                cout<<"   1 |";
                break;
            case 2:
                cout<<"R  2 |";
                break;
            case 3:
                cout<<"O  3 |";
                break;
            case 4: 
                cout<<"W  4 |";
                break;
            case 5:
                cout<<"S  5 |";
                break;
            case 6:
                cout<<"   6 |";
                break;
        }
        for (int j = 0; j<COLS;j++){//Loops through all of the collums
            cout<<setw(w)<<tablSum[i][j];//Prints the item
        }
        cout<<endl;//caps off a row.
    }
}

void prdTab() {
    //Declare Variables
    const int ROWS=6;//Number of rows.
    int tablSum[ROWS][COLS];//The table.
    
    //Initialize or input i.e. set variable values
    cout<<"Think of this as a Product/Muliplication Table"<<endl;
    fillTbl(tablSum,ROWS);//Generates the table.
    
    //Display the outputs
    prntTbl(tablSum,ROWS);//Prints the table.

    //Exit stage right or left!
}
void fillPrdTbl(int tablSum[][COLS],int ROWS){
    for (int i = 0; i <ROWS; i++){//Goes through all the rows.
        for (int j = 0; j<COLS;j++){//Goes through all the collums.
            tablSum[i][j] = (i+1)*(j+1);//Fills the slots,
        }
    }
}

void reverse() {
    //Declare Variables
    const int SIZE=50;//Size of the array.
    int test[SIZE];//The array.
    
    //Initialize or input i.e. set variable values
    fillAry(test,SIZE);//Takes in the array.
    
    //Reverse the Values
    revrse(test,SIZE);//Reveres the array.

    //Display the outputs
    prntAry(test,SIZE,10);//Displays the array.

    //Exit stage right or left!
}
void  revrse(int test[],int size){
    int temp[size];//The flipped array.
    for (int i = 0; i < size; i++){//Loops trough all elements.
        temp[i] = test[size-i-1];//The i from the first value of temp become the i from last value of test.
    }
    for (int i = 0; i <size; i++){//Makes test temp.
        test[i] = temp[i];
    }
}

void standDev() {
    //Declare Variables
    const int SIZE=20;//The number of elements in the sample.
    float test[SIZE];//The sample
    
    //Initialize or input i.e. set variable values
    initSD(test,SIZE);//Fills the array
    
    //Display the outputs
    printSD(test,SIZE,7);//Prints the array

    //Exit stage right or left!
}
void  initSD(float test[],int SIZE){//Fills the array
    for (char i = 0;i < SIZE;i++){//Goes trough all the elements
        cin>>test[i];//and puts input into the array.
    }
}
void  printSD(float test[],int SIZE,int places){//Prints the array
    float mean = avgX(test,SIZE),//the mean
          dist = stdX(test,SIZE,mean);//the standard distribution
    cout<<setprecision(places)<<fixed;
    cout<<"The average            = "<<mean<<endl;
    cout<<"The standard deviation = "<<dist<<endl; 
}
float avgX(float test[],int SIZE){//finds the average
    return sumX(test,SIZE)/SIZE;
}
float stdX(float test[],int SIZE, float mean){//finds the standard deviation
    float sum=0;
    for (char i = 0;i < SIZE;i++){
        sum += pow(test[i]- mean,2);
    }    
    return sqrt(sum/(SIZE-1));
}
float sumX(float test[],int SIZE){//finds the sum
    float sum=0;
    for (char i = 0;i < SIZE;i++){
        sum += test[i];
    }
    return sum;
}

void grade() {
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

void linear() {
    //Declare Variables
    const int SIZE=100;//The number of elements
    int array[SIZE];//the array
    int indx,val;//the desired indx of the desired value and the desired value
    
    //Initialize or input i.e. set variable values
    val=50;//establishes 50 as desired value.
    fillAry(array,SIZE);//fills the array
    
    //Display the outputs
    if(linSrch(array,SIZE,val,indx))//prints the output.
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
}
void fillAry(int array[],int SIZE){//fills the array
    for (char i = 0; i < SIZE;i++){//loops through all the elements
        cin>>array[i];//and fills them with the inputs
    }
}
bool linSrch(int array[],int SIZE,int val,int &indx){//does a linear search
    for (char i = 0; i < SIZE;i++){//loops through all the elemens
        if (array[i] == val){//if it finds the value
            indx = i;//sets the indx to the index
            return true;//leaves the function returning true
        }
    }
    return false;//returns false if the value was not found.

}

void binSelsort() {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
}
void  prntAry(int test[],int size,int peRow){
    for (int i = 0; i < size; i++){//Loops trough all elements.
        if (i%peRow==0 && i != 0) cout<<endl;//If its the end of a line adds a linebreak.
        cout<<test[i]<<" ";//Outputs the element.
    }
    cout<<endl<<endl;//Adds the final linebreak.
}
void selSrt(int array[],int SIZE){//sorts the array
    for (int i = 0;i < SIZE; i ++){//loops through all the values
        int min = 2<<8,//the current min, starts really big
            indx=0,//the index of the min
            temp;//tempary value
        for (int j = i; j <SIZE; j ++){//loops through all potential smaller values to find the next smallest
            if (array[j] < min){//if the currect spot is greater than the found min
                min =array[j];//sets the found min to the currect val
                indx = j;//sets index to the current place
            }
        }
        //Does the swap
        temp = array[i];
        array[i] = array[indx];
        array[indx] = temp;
    }
}
bool binSrch(int array[],int SIZE,int val,int& indx){//Does the binary search
    char first = 0,//the first value of the search range
         last = SIZE,//the last value of the search range
         mid;//the comparison point
    while (first <= last){//while first not greater than last
        mid = (first + last)/2;//puts mid half way between first and last.
        if (val < array[mid]) last = mid;//if the value is less than the mid, last becomes mid.
        else if (val > array[mid]) first = mid;//if the value is greater than mid, first becomes mid.
        else{
            indx = mid;//indx becomes min
            return true;
        }
    }
}

void binBublsort() {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
}
void bublSrt(int array[],int SIZE){//sorts the array
    bool done = false;//keeps track if its doen
    while (!done){//while it is not sorted
        done = true;//sets done to true
        for (int i = 0; i < SIZE-1; i++){//checks every value
            if (array[i] > array[i+1]){//if the current value is greater than the next one
                //swaps the values
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1]=temp;
                done = false;//sets done to fale

            }
        }
    }
}

