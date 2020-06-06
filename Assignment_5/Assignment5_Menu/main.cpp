/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on May 17, 2020, 12:33 PM
 * Purpose: Menu for assinment 5
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
void minMax();
void fndMinMax(int,int,int,int&,int&);//Function to find the min and max

void factorial();
int fctrl(int);//Function to write for this problem

void Prime();
bool isPrime(int);//Determine if the input number is prime.

void CollatzSequence();
int collatz(int);//3n+1 sequence

void ColSqOSq();
int collatzSq(int);//3n+1 sequence

void wait();
void waitInputs(unsigned char&,unsigned char&,unsigned char&,unsigned short&);
void calWait(unsigned char&,unsigned char&,unsigned char&,unsigned short);

void TimeConverter();
void cnvtTime(unsigned short, unsigned short);

void PresentVal();
float psntVal(float, unsigned char, unsigned char);

void Average();
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;
    //Variable Initialization
    do{
    cout<<"Please select which program you would like to use:"<<endl
        <<"\t1) MinMax calculator"<<endl
        <<"\t2) Factorial generator"<<endl
        <<"\t3) Prime Checker"<<endl
        <<"\t4) Collatz Sequence lenght calculator"<<endl
        <<"\t5) Collatz Sequence generator"<<endl
        <<"\t6) Future time calculator"<<endl
        <<"\t7) 24h to 12h time converter"<<endl
        <<"\t8) Present value calculator"<<endl
        <<"\t9) Average score Calculator"<<endl
        <<"Enter your selection 1-9: ";     
    cin>>choice;
    cout<<endl<<endl;
    //Mapping Process Inputs to Outputs
    switch (choice){
        case '1':
            minMax();
            break;
        case '2':
            factorial();
            break;
        case '3':
            Prime();
            break;
        case '4':
            CollatzSequence();
            break;
        case '5':
            ColSqOSq();
            break;
        case '6':
            wait();
            break;
        case '7':
            TimeConverter();
            break;
        case '8':
            PresentVal();
            break;
        case '9':
            Average();
            break;
    }
    cout<<endl<<endl<<"Would you like to select a diffrent program Y/N: ";
    cin>>choice;
    }while (choice == 'y' || choice == 'Y');
    //Clean Up
    
    //Exit stage right!
    return 0;
}

void minMax(){
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
    fndMinMax(n1,n2,n3,min,max);//Calls minmax to find min and max.
    //Output data
    cout<<"Min = "<<min<<endl
        <<"Max = "<<max;
}
void fndMinMax(int n1, int n2, int n3, int& min,int& max){
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

void factorial(){
    //Declare Variables
    int n;//The number to find the factorial of.
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl//States program's Purpose.
        <<"Input the number for the function."<<endl;//Asks for input.
    cin>>n;//Takes in user input for n.
    //Process/Map inputs to outputs
    
    //Output data
    cout<<n<<"! = "<<fctrl(n);//Calculates factorial and output results.
}
int fctrl(int n){//Uses recersion for calculate the factorial.
    return n > 1?//its not on 1
        n * fctrl(n-1)://Returns the n * the factorial of n-1;
        1;//if n is 1 Returns one.
}

void Prime(){
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
}
bool isPrime(int x){//Determine if the input number is prime.
    for (int i = 2; i <= sqrt(x);i++){//Loops through possible factor canidits.
        if (x%i == 0 ) return false;//Returns false if it finds a factor.
    }
    return true;//If no fator was found returns true.
}

void CollatzSequence(){
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";    
}
int collatz(int n){
    int count = 1;//Keeps track of the collats length.
    while (n != 1){//Goes until 1.
        n = n % 2 == 0?
            n/2://If n is even, n is divided by 2.
            n*3 +1;//If n is odd n is muliplyed by 3 and then 1 is added.
    count ++;//Count then goes up.
    }
    return count;//Outputs count.
}

void ColSqOSq(){
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatzSq(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";    
}
int collatzSq(int n){
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

void wait(){
    //Set the random number seed
    
    //Declare Variables
    unsigned char hours=0,//clock hours
                  mins=0,//clock minutes
                  noon=0,//Am/PM
                  repeat='n';//if it will go again
    unsigned short wait=0;//Time to wait.

    //Initialize or input i.e. set variable values
    do{//
        waitInputs(hours,mins,noon,wait);//takes in the inputs.
        cout<<endl<<"Current time = ";hours<10? cout<<"0":cout<<"";cout<<(short)hours<<":";mins<10? cout<<"0":cout<<"";cout<<(short)mins<<" "<<noon<<"M";//Displays the current time
    //Map inputs -> outputs
        calWait(hours,mins,noon,wait);//calculates the new time
    //Display the outputs
        cout<<endl<<"Time after waiting period = ";hours<10? cout<<"0":cout<<"";cout<<(short)hours<<":";mins<10? cout<<"0":cout<<"";cout<<(short)mins<<" "<<noon<<"M"<<endl;//displays the new time
        cout<<endl<<"Again:"<<endl;//Asks if the user wants to go again.
        cin>>repeat;//takes in respone
        if(repeat=='y')cout<<endl;//if they want to go again adds a line break
    }while (repeat =='y');//and repeats.    
}
void waitInputs(unsigned char &hours,unsigned char &mins,unsigned char &noon,unsigned short &wait){
    short temp;//Inputs the charecters as shorts
    cout<<"Enter hour:"<<endl;
    cin>>temp;//Takes in input,
    hours = temp;//and stores it in hours.
    cout<<endl<<"Enter minutes:"<<endl;
    cin>>temp;//Takes in input,
    mins = temp;//and stores it in mins.
    cout<<endl<<"Enter A for AM, P for PM:"<<endl;
    cin>>noon;//Takes in input and stores it in noon.
    cout<<endl<<"Enter waiting time:"<<endl;
    cin>>temp;//Takes in input,
    wait = temp;//and stores it in wait.
}
void calWait(unsigned char &hours,unsigned char &mins,unsigned char &noon,unsigned short wait){
    mins += wait;//Adds the wait to mins.
    while (mins >= 60){//Ticks up hours when needed.
        mins -= 60;//Takes 60 off mins
        if(hours==11){//If hours will go past 12
            noon = noon == 'A'?//Swaps noon
                'P':'A';
        }
        else if (hours == 12){//othes if it will it will go to 13
            hours = 0;//sets hours to 0
        }
        hours ++;//and adds 1.
    }
}

void TimeConverter(){
    //Declare Variables
    unsigned short hour,//The hours
                   minute;//the minutes
    char repeat;//If it will repeat
    //Initialize or input i.e. set variable values
    cout<<"Military Time Converter to Standard Time"<<endl//States perpose.
        <<"Input Military Time hh:mm"<<endl;//Prompts input.
    do{//does the stuff
        cin>>hour;//takes in hours
        cin.ignore();//skips the ':''
        cin>>minute;//takes in minutes
    //Map inputs -> outputs
    
    //Display the outputs
        hour<10?cout<<"0":cout<<"";cout<<hour<<":"<<minute;//outputs the mulitart time
        cnvtTime(hour,minute);//Outputs the 12 hour time.
        cout<<"Would you like to convert another time (y/n)"<<endl;//asks if they want to go again.
        cin>>repeat;//takes in respone/
    }while(repeat=='y' || repeat =='Y');//if repeat is not y stops doing the stuff.    
}
void cnvtTime(unsigned short hour, unsigned short minute){
    if(minute<60 && hour<25){//validates input.
        cout<<" = ";
        if (hour >=12) {//If its afternoon
            hour ==12?//if it is noon
                cout<<"12"://outputs 12
                cout<<hour-12;//otherwise outputs the time after noon.
            cout<<":"<<minute<<" PM"<<endl;//then minutes and PM
        }
        else{//otherwise if its AM
            hour == 0?//If its midnight
                cout<<"12:"<<minute<<" AM"<<endl://outputs 12:min: AM
                cout<<hour<<":"<<minute<<" AM"<<endl;//otherwise outputs the time after midnight
        }
    }
    else cout<<" is not a valid time"<<endl;//If its not a proper time complains to the user.
        
}

void PresentVal(){
    //Declare Variables
    float f;//Future value
    unsigned short n,//period
                  r;//intrest rate
    //Initialize or input i.e. set variable values
    cout<<"This is a Present Value Computation"<<endl//states Purpose
        <<"Input the Future Value in Dollars"<<endl;//Props input of target val
    cin>>f;//takes in input
    cout<<"Input the Number of Years"<<endl;//Prompts input of period.
    cin>>n;//takes in period.
    cout<<"Input the Interest Rate %/yr"<<endl;//Prompts input of intrest rate,
    cin>>r;//and takes in intrest rate.
    //Map inputs -> outputs
    //Display the outputs
    cout<<setprecision(2)<<fixed;//Prepares outputs.
    cout<<"The Present Value = $"<<psntVal(f,n,r);//Outputs the required present value.
}
float psntVal(float f, unsigned char n, unsigned char r){
    return f/(float)(pow((1+r/100.0f),n));//returns the result of the present value formula.
}

void Average(){
    //Declare Variables
    int s1,s2,s3,s4,s5;//The five test scores.
    //Initialize or input i.e. set variable values
    cout<<"Find the Average of Test Scores"<<endl//Displays perpose.
        <<"by removing the lowest value."<<endl;
    getScre(s1,s2,s3,s4,s5);//Takes input.
    //Map inputs -> outputs
    //Display the outputs
    cout<<setprecision(1)<<fixed;//sets up output.
    cout<<"The average test score = "<<calcAvg(s1,s2,s3,s4,s5);//Display results.    
}
void getScre(int &s1,int &s2,int &s3,int &s4,int &s5){
    cout<<"Input the 5 test scores."<<endl;//Prompts input
    cin>>s1>>s2>>s3>>s4>>s5;//takes in inputs
    if (1<s1>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s2>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s3>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s4>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
    if (1<s5>100){//Validates inputs
        cout<<"Invalid Input";
        exit(0);
    }
}
float calcAvg(int s1,int s2,int s3,int s4,int s5){
    float sum = s1+s2+s3+s4+s5 - fndLwst(s1,s2,s3,s4,s5);//Finds the sum and remvomes the lowest.
    
    return sum/4.0f;//then takes the average of the remaing 4
}
int fndLwst(int s1,int s2,int s3,int s4,int s5){
    int min = s1;//the lowest checked value, starts at s1
    min = min > s2?//if s2 is less than the current lowest value it becomes the current lowest value
        s2:min;
    min = min > s3?//if s3 is less than the current lowest value it becomes the current lowest value
        s3:min;
    min = min > s4?//if s4 is less than the current lowest value it becomes the current lowest value
        s4:min;
    min = min > s5?//if s5 is less than the current lowest value it becomes the current lowest value
        s5:min;
    return min;//returns whichever was found to be lowest/
}