/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on February 27, 2020, 10:02am
 * Purpose: Query Datatype size
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
#include <Cmath> //I/o Libarary
using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
const int NIBBLES = 2;// 2 Nibbles in a Byte
const int BITS = 8;   // 8 Bits in a Byte

//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    
    //Variable Declarations
    
    //Variable Initialization
    
    //Mapping Process Inputs to Outputs
    
    //Display Outputs
    cout<<"The # of Bytes for each Integer Data Type"<<endl;
        /* Displays data for a char */{
        cout<<endl;
        cout<<"The size of a character = "<<sizeof(char)<< " Byte"<<endl;
        cout<<"The size of a character = "<<NIBBLES*sizeof(char)<< " Nibbles"<<endl;
        cout<<"The size of a character = "<<BITS*sizeof(char)<< " Bits"<<endl;
        cout<<"Range of -2^7 to (2^7)-1 ("<<-pow(2,7)<<" , "<<pow(2,7)-1<<")"<<endl;
                                      }
    
        /* Displays data for a unsigned char */{
        cout<<endl;
        cout<<"The size of a unsigned character = "<<sizeof(unsigned char)<< " Bytes"<<endl;
        cout<<"The size of a unsigned character = "<<NIBBLES*sizeof(unsigned char)<< " Nibbles"<<endl;
        cout<<"The size of a unsigned character = "<<BITS*sizeof(unsigned char)<< " Bits"<<endl;
        cout<<"The size of a unsigned character = "<<BITS*sizeof(unsigned char)<< " Bits"<<endl;
        cout<<"Range of 0 to (2^8)-1 (0 , "<<pow(2,8)-1<<")"<<endl;
    }
    
        /* Displays data for a short */{
        cout<<endl;
        cout<<"The size of a short = "<<sizeof(short)<< " Bytes"<<endl;
        cout<<"The size of a short = "<<NIBBLES*sizeof(short)<< " Nibbles"<<endl;
        cout<<"The size of a short = "<<BITS*sizeof(short)<< " Bits"<<endl;
        cout<<"Range of -2^15 to (2^15)-1 ("<<-pow(2,15)<<" , "<<pow(2,15)-1<<")"<<endl;
    }
    
        /* Displays data for a unsigned short */{
        cout<<endl;
        cout<<"The size of a unsigned short = "<<sizeof(unsigned short)<< " Bytes"<<endl;
        cout<<"The size of a unsigned short = "<<NIBBLES*sizeof(unsigned short)<< " Nibbles"<<endl;
        cout<<"The size of a unsigned short = "<<BITS*sizeof(unsigned short)<< " Bits"<<endl;
        cout<<"Range of 0 to (2^16)-1 (0 , "<<pow(2,16)-1<<")"<<endl;
        }
    
        /* Displays data for a boolean */{
        cout<<endl;
        cout<<"The size of a boolean = "<<sizeof(bool)<< " Bytes"<<endl;
        cout<<"The size of a boolean = "<<NIBBLES*sizeof(bool)<< " Nibbles"<<endl;
        cout<<"The size of a boolean = "<<BITS*sizeof(bool)<< " Bits"<<endl;
        cout<<"Range of 0 to 2^0 (0 , "<<pow(2,0)<<")"<<endl;

    }
    
        /* Displays data for a integer  */{
        cout<<endl;
        cout<<"The size of a integer = "<<sizeof(int)<< " Bytes"<<endl;
        cout<<"The size of a integer = "<<NIBBLES*sizeof(int)<< " Nibbles"<<endl;
        cout<<"The size of a integer = "<<BITS*sizeof(int)<< " Bits"<<endl;
        cout<<"Range of -2^31 to (2^31)-1 ("<<-pow(2,31)<<" , "<<pow(2,31)-1<<")"<<endl;

    }
       
        /* Displays data for a unsigned integer  */{
        cout<<endl;
        cout<<"The size of a unsigned integer = "<<sizeof(unsigned int)<< " Bytes"<<endl;
        cout<<"The size of a unsigned integer = "<<NIBBLES*sizeof(unsigned int)<< " Nibbles"<<endl;
        cout<<"The size of a unsigned integer = "<<BITS*sizeof(unsigned int)<< " Bits"<<endl;
        cout<<"Range of 0 to (2^32)-1 (0 , "<<pow(2,32)-1<<")"<<endl;
    }

        /* Displays data for a long  */{
        cout<<endl;
        cout<<"The size of a long = "<<sizeof(long)<< " Bytes"<<endl;
        cout<<"The size of a long = "<<NIBBLES*sizeof(long)<< " Nibbles"<<endl;
        cout<<"The size of a long = "<<BITS*sizeof(long)<< " Bits"<<endl;
        cout<<"Range of -2^63 to (2^63)-1 ("<<-pow(2,63)<<" , "<<pow(2,63)-1<<")"<<endl;
    }
       
        /* Displays data for a unsigned long  */{
        cout<<endl;
        cout<<"The size of a unsigned long = "<<sizeof(unsigned long)<< " Bytes"<<endl;
        cout<<"The size of a unsigned long = "<<NIBBLES*sizeof(unsigned long)<< " Nibbles"<<endl;
        cout<<"The size of a unsigned long = "<<BITS*sizeof(unsigned long)<< " Bits"<<endl;
        cout<<"Range of 0 to (2^64)-1 (0 , "<<pow(2,64)-1<<")"<<endl;
    }
    
        /* Displays data for a long long int  */{
        cout<<endl;
        cout<<"The size of a long long int = "<<sizeof(long long int)<< " Bytes"<<endl;
        cout<<"The size of a long long int = "<<NIBBLES*sizeof(long long int)<< " Nibbles"<<endl;
        cout<<"The size of a long long int = "<<BITS*sizeof(long long int)<< " Bits"<<endl;
        cout<<"Range of -2^63 to (2^63)-1 ("<<-pow(2,63)<<" , "<<pow(2,63)-1<<")"<<endl;
    }
    
        /* Displays data for a float  */{
        cout<<endl;
        cout<<"The size of a float = "<<sizeof(float)<< " Bytes"<<endl;
        cout<<"The size of a float = "<<NIBBLES*sizeof(float)<< " Nibbles"<<endl;
        cout<<"The size of a float = "<<BITS*sizeof(float)<< " Bits"<<endl;
        cout<<"Range of +/-10^+/-(2^7)(log2) +/- 10^ +/- "<<pow(2,7)*log10(2)<<endl;
       //log base A of B = logA(B)
    }
    
        /* Displays data for a double  */{
        cout<<endl;
        cout<<"The size of a double = "<<sizeof(double)<< " Bytes"<<endl;
        cout<<"The size of a double = "<<NIBBLES*sizeof(double)<< " Nibbles"<<endl;
        cout<<"The size of a double = "<<BITS*sizeof(double)<< " Bits"<<endl;
        cout<<"Range of +/-10^+/-(2^10)(log2) +/- 10^ +/- "<<pow(2,10)*log10(2)<<endl;

    } 
    //Clean Up
    
    //Exit stage right!
    return 0;
}

