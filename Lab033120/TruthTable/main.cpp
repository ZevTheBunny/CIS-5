/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Zevtop
 *
 * Created on March 31, 2020, 5:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    bool x,
         y;
    cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||Y !(X||Y) !X&&!Y" << endl;
    //First line of table
    x = true;
    y = true;
    cout << (x ? 'T' : 'F') << " "
         << (y ? 'T' : 'F') << " "
         << (!x ? 'T' : 'F') << "  "
         << (!y ? 'T' : 'F') << "  "
         << (x&&y ? 'T' : 'F') << "    "
         << (x || y ? 'T' : 'F') << "    "
         << (x^y ? 'T' : 'F') << "   "
         << (x^y^y ? 'T' : 'F') << "     "
         << (x^y^x ? 'T' : 'F') << "     "
         << (!(x&&y) ? 'T' : 'F') << "       "
         << (!x || y ? 'T' : 'F') << "     "
         << (!(x || y) ? 'T' : 'F') << "       "
         << (!x && !y ? 'T' : 'F') << endl;

    //Secound line of table
    x = !true;
    y = true;
    cout<< (x ? 'T' : 'F') << " "
        << (y ? 'T' : 'F') << " "
        << (!x ? 'T' : 'F') << "  "
        << (!y ? 'T' : 'F') << "  "
        << (x&&y ? 'T' : 'F') << "    "
        << (x || y ? 'T' : 'F') << "    "
        << (x^y ? 'T' : 'F') << "   "
        << (x^y^y ? 'T' : 'F') << "     "
        << (x^y^x ? 'T' : 'F') << "     "
        << (!(x&&y) ? 'T' : 'F') << "       "
        << (!x || y ? 'T' : 'F') << "     "
        << (!(x || y) ? 'T' : 'F') << "       "
        << (!x && !y ? 'T' : 'F') << endl;

    //Third line of table
    x = true;
    y = !true;
    cout<< (x ? 'T' : 'F') << " "
        << (y ? 'T' : 'F') << " "
        << (!x ? 'T' : 'F') << "  "
        << (!y ? 'T' : 'F') << "  "
        << (x&&y ? 'T' : 'F') << "    "
        << (x || y ? 'T' : 'F') << "    "
        << (x^y ? 'T' : 'F') << "   "
        << (x^y^y ? 'T' : 'F') << "     "
        << (x^y^x ? 'T' : 'F') << "     "
        << (!(x&&y) ? 'T' : 'F') << "       "
        << (!x || y ? 'T' : 'F') << "     "
        << (!(x || y) ? 'T' : 'F') << "       "
        << (!x && !y ? 'T' : 'F') << endl;

    //Forth line of table
    x = false;
    y = false;
    cout<< (x ? 'T' : 'F') << " "
        << (y ? 'T' : 'F') << " "
        << (!x ? 'T' : 'F') << "  "
        << (!y ? 'T' : 'F') << "  "
        << (x&&y ? 'T' : 'F') << "    "
        << (x || y ? 'T' : 'F') << "    "
        << (x^y ? 'T' : 'F') << "   "
        << (x^y^y ? 'T' : 'F') << "     "
        << (x^y^x ? 'T' : 'F') << "     "
        << (!(x&&y) ? 'T' : 'F') << "       "
        << (!x || y ? 'T' : 'F') << "     "
        << (!(x || y) ? 'T' : 'F') << "       "
        << (!x && !y ? 'T' : 'F') << endl;

    cout << endl << endl << endl;
    
    char a, b;
    //Swaping using memory
    a = 2;
    b = 3;
    char temp;
    temp = a;
    a = b;
    b = temp;
    cout << (short)a << "\t" << (short)b<<endl;

    //Swaping using logic
    a = 2;
    b = 3;
    a = a^b;
    b = a^b;
    a = a ^ b;
    cout << (short)a << "\t" << (short)b<<endl;

    
    return 0;
}

