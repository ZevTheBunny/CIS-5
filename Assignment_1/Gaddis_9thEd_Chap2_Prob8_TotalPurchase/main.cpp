/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David Seitz 
 * Created on May 2, 2020, 7:32pm
 * Purpose: Displays sales info including indiviual prices, subtotal, sales tax and total.
 */

//System Level Libraries 
#include <iostream> //I/o Libarary
using namespace std; // Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {    
    //Variable Declarations
    float item1,//The price of the first item
          item2,//The price of the secound item
          item3,//The price of the third item
          item4,//The price of the fourth item
          item5;//The price of the fifth item
      
    float subTot,//The subtotal of the items
          taxRate,//The taxrate
          taxVal,//The amount of money taken by tax
          total; //the total amount
    //Variable Initialization
    item1 = 15.95f;
    item2 = 24.95f;
    item3 = 6.95f;
    item4 = 12.95f;
    item5 = 3.95f;
   
    taxRate = 0.07f;
    subTot = 0;
    
    //Mapping Process Inputs to Outputs
    subTot = item1+ item2 + item3 + item4 + item5;
    taxVal = subTot * taxRate;
    total = subTot + taxVal;
    //Display Outputs
    cout<<"Price of item 1 = $"<<item1<<endl;
    cout<<"Price of item 2 = $"<<item2<<endl;
    cout<<"Price of item 3 = $"<<item3<<endl;
    cout<<"Price of item 4 = $"<<item4<<endl;
    cout<<"Price of item 5 = $"<<item5<<endl;
    cout<<endl;
    cout<<"Subtotal = $"<<subTot<<endl;
    cout<<"Tax = $"<<taxVal<<endl;
    cout<<"Total = $"<<total<<endl;

    //Clean Up
    
    //Exit stage right!
    return 0;
}

