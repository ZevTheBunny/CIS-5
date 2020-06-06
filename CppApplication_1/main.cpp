/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Zevtop
 *
 * Created on April 21, 2020, 1:10 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int bob = 1;
    {
        int kevin;
        int * jeff;
        jeff = &bob;
    for (int i =1;i<20;i++)
    {
       // *jeff ++;
    }
        {  *jeff = 10;}
    cout<<bob<<endl<<jeff<<endl;}
    cout<<bob;
    return 0;
}

