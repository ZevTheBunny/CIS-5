/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Modified By: David Seitz
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
#include <cstdlib>

using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddos Maximum Minimum Problem"<<endl;
    cout<<"Type 2 for Gaddis Rectangle Area Problem"<<endl;
    cout<<"Type 3 for Gaddis Name Sorting Problem"<<endl;
    cout<<"Type 4 for Gaddis Book Worm Problem"<<endl;
    cout<<"Type 5 for Gaddis Checking Problem"<<endl;
    cout<<"Type 6 for Gaddis Race Sorter Problem"<<endl;
    cout<<"Type 7 for Gaddis ISP Plan Problem"<<endl;
    cout<<"Type 8 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 9 for Savitch Star Signs Problem"<<endl;
    cout<<"Type 0 for Savitch Roman Numeral Conveter Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':{
            //Declare Variables
            short num1,
                  num2;
            //Initialize or input i.e. set variable values
            cin>>num1>>num2;
            //Map inputs -> outputs

            //Display the outputs
            num1<num2?
                cout<<num2<<" is greater than "<<num1:
                cout<<num1<<" is greater than "<<num2;
            break;
        }
        case '2':{
            //Declare Variables
            unsigned short l1,
                           l2,
                           w1,
                           w2,
                           a1,
                           a2;
            //Initialize or input i.e. set variable values
            cout<<"Enter the lengh and width of one rectangle than another."<<endl;
            cin>>l1>>w1>>l2>>w2;
            //Map inputs -> outputs
            a1 = l1*w1;
            a2 = l2*w2;
            //Display the outputs
            if (a1 > a2){
                cout<<"The first rectangle has the greater area.";
            }
            else if (a1 < a2){
                cout<<"The secound rectangle has the greater area.";
            }
            else{
                cout<<"The two rectangles have the same area.";
            }
            break;
        }
        case '3':{
            //Declare Variables
            string name1,
                   name2,
                   name3;
            //Initialize or input i.e. set variable values
            cout<<"Sorting Names"<<endl
                <<"Input 3 names"<<endl;
            cin>>name1>>name2>>name3;
            //Map inputs -> outputs

            //Display the outputs
            if(name1<name2&&name2<name3){ //1 2 3
                cout<<name1<<endl
                    <<name2<<endl
                    <<name3;
            }
            else if(name1<name2&&name1<name3){ //1 3 2 
                cout<<name1<<endl
                    <<name3<<endl
                    <<name2;
            }
            else if(name2<name3&&name1<name3){ //2 1 3 
                cout<<name2<<endl
                    <<name1<<endl
                    <<name3;
            }
            else if(name2<name3&&name3<name1){ //2 3 1 
                cout<<name2<<endl
                    <<name3<<endl
                    <<name1;
            }
            else if(name3<name2&&name2<name1){ //3 2 1 
                cout<<name3<<endl
                    <<name2<<endl
                    <<name1;
            }
            else if(name3<name1&&name1<name2){ //3 1 2 
                cout<<name3<<endl
                    <<name1<<endl
                    <<name2;
            }
            break;
        }
        case '4':{
            //Declare Variables
            unsigned char read=1,
                          points=0;
            //Initialize or input i.e. set variable values
            cout<<"Book Worm Points"<<endl
                <<"Input the number of books purchased this month."<<endl;
            cin>>read;
            //Map inputs -> outputs
            switch (read)
            {
                case '0':
                    points = 0;
                    break;
                case '1':
                    points = 5;
                    break;
                case '2':
                    points = 15;
                    break;
                case '3':
                    points = 30;
                    break;
                default:
                    points = 60;
                    break;
            }
            //Display the outputs
            char w = 2;
            cout<<"Books purchased = "<<setw(w)<<read<<endl
                <<"Points earned   = "<<setw(w)<<(short)points;
            break;
        }
        case '5':{
            //Declare Variables
            float bal,
                  fee;
            unsigned short checks;

            //Initialize or input i.e. set variable values
            cout<<"Monthly Bank Fees"<<endl
                <<"Input Current Bank Balance and Number of Checks"<<endl;
            cin>>bal>>checks;

            //Map inputs -> outputs
            if (checks < 0){
                cout<<"Invalid amount of checks";
            }
            switch(checks){
                case 0 ... 19:
                    fee = .1f *checks;
                    break;
                case 20 ... 39:
                    fee = .08f *checks;
                    break;
                case 40 ... 59:
                    fee = .06f *checks;
                    break;
                default:
                    fee = .04f *checks;
                    break;
            }
            //Display the outputs
            char w = 8;
            cout<<setprecision(2)<<fixed;
            cout<<"Balance     $ "<<setw(w)<<bal<<endl
                <<"Check Fee   $ "<<setw(w)<<fee<<endl
                <<"Monthly Fee $ "<<setw(w)<<"10.00"<<endl;
            bal <=400?
                cout<<"Low Balance $ "<<setw(w)<<"15.00"<<endl
                    <<"New Balance $ "<<setw(w)<<bal - fee - 10 - 15:
                cout<<"Low Balance $ "<<setw(w)<<"0.00"<<endl
                    <<"New Balance $ "<<setw(w)<<bal - fee - 10;
            break;
        }
        case '6':{
            //Declare Variables
            string n1,
                   n2,
                   n3;
            short t1,
                t2,
                t3;
            //Initialize or input i.e. set variable values
            cout<<"Race Ranking Program"<<endl
                <<"Input 3 Runners"<<endl
                <<"Their names, then their times"<<endl;
            cin>>n1>>t1;
            cin>>n2>>t2;
            cin>>n3>>t3;
            //Map inputs -> outputs

            //Display the outputs
            if(t1<t2&&t2<t3){ //1 2 3
                cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                cout<<n3<<"\t"<<setw(3)<<t3;
            }
            else if(t1<t2&&t1<t3){ //1 3 2 
                cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                cout<<n2<<"\t"<<setw(3)<<t2;
            }
            else if(t2<t3&&t1<t3){ //2 1 3 
                cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                cout<<n3<<"\t"<<setw(3)<<t3;
            }
            else if(t2<t3&&t3<t1){ //2 3 1 
                cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                cout<<n1<<"\t"<<setw(3)<<t1;
            }
            else if(t3<t2&&t2<t1){ //3 2 1 
                cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                cout<<n1<<"\t"<<setw(3)<<t1;
            }
            else if(t3<t1&&t1<t2){ //3 1 2 
                cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                cout<<n2<<"\t"<<setw(3)<<t2;
            }            
            break;
        }
        case '7':{
            //Set the random number seed

            //Declare Variables
            char package;  //The package the user has selected.
            unsigned short hours; //The amount of hours the user has used the user's internet.
            float fee; //the amount the user will owe.
            //Initialize or input i.e. set variable values
            cout<<"ISP Bill"<<endl 
                <<"Input Package and Hours"<<endl;
            cin>>package>>hours; //Inputs the package abd hours
            //Map inputs -> outputs
            if (hours >744) //Checks if the time is possible
            {
                cout<<"You did not enter a valid time, there are only 744 hours in a 31 day month, it is impossible for someone to have used this much internet.";
                exit(0);
            }
            switch (package)  //Checks what package someone bought.
            {
                case 'A': //If they are using package A,
                    fee = hours<=10? //it checks if they went over the limit;
                        9.95f: //if not it will set their fee to the default 9.95 of plan A,
                        9.95f+ 2*(hours-10);//but if they did go over it will calculate and apply overcharge.
                    break;
                case 'B'://If they are using package B, 
                    fee = hours<=20? //it checks if they went over the limit;
                        14.95f://if not it will set their fee to the default 14.95 of plan B,
                        14.95f+ 1*(hours-20);//but if they did go over it will calculate and apply overcharge/
                    break;
                case 'C'://If they are using package C,
                    fee = 19.95;//It sets the fee to 19.95 regardless of how much time they used, becuse time matters not for an unlimited plan.
                    break;
                default://If they entered a package that was not A B or C it tells them and escapes the program.
                    cout<<"You did not enter a valid package, please choose A B or C"; 
                    exit(0);
            }
            //Display the outputs
            cout<<"Bill = $ "<<fee;             
            break;
        }
        case '8':{
            //Declare Variables
            char p1,p2; //Charecters holding the value of the 2 player's Choices.
            //Initialize or input i.e. set variable values
            cout<<"Rock Paper Scissors Game"<<endl //Announces the programes Function.
                <<"Input Player 1 and Player 2 Choices"<<endl;//Asks the user for inputs.
            cin>>p1>>p2;//Recives inputs, storing the first one in p1 and the secound one in p2.
            //Map inputs -> outputs
            switch (p1) //Checks what letter is in p1 and converts it to a number value used to calculate results.
            {
                case 'R': case 'r': //If rock,
                    p1=1;           //sets p1 to 1.
                    break;
                case 'P': case 'p': //If paper,
                    p1=2;           //sets p2 to 2.
                    break;
                case 'S': case 's': //If scissors,
                    p1 = 5;         //sets p1 to 5,
                    break;
                default: //If it is not a valid respose,
                    cout<<"You did not give a valid input, please enter R P or S"; //tells the user to fix it.

            }
            switch (p2) //Checks what letter is in p2 and converts it to a number value used to calculate results.
            {
                case 'R': case 'r': //If rock,
                    p2=1;           //sets p2 to 1.
                    break;
                case 'P': case 'p': //If paper,
                    p2=2;           //sets p2 to 2.
                    break;
                case 'S': case 's': //If scissors,
                    p2 = 5;         //sets p2 to 5.
                    break;
                default:                                                          //If it is not a valid respose,
                    cout<<"You did not give a valid input, please enter R P or S";//tells the user to fix it.
            }
            //Display the outputs
            switch (p1 -p2) //Figures out the results.
            {
                case 0: //If they playerd the same thing,
                    cout<<"Nobody wins.";//Displays that Nobody won.
                    break;
                case 1: case -1://If paper was played against rock,
                    cout<<"Paper covers rock.";//outputs that paper won.
                    break;
                case 4: case -4: //If rock was played against scissors,
                    cout<<"Rock breaks scissors.";//outputs that rock one.
                    break;
                case 3: case -3://If scissors was played against paper,
                    cout<<"Scissors cuts paper.";//outputs that scissors won.
                    break;
            }            
            break;
        }
        case '9':{
            //Declare Variables
            string sign1,
                   sign2,
                   elm1,
                   elm2;
            //Initialize or input i.e. set variable values
            cout<<"Horoscope Program which examines compatible signs."<<endl
                <<"Input 2 signs."<<endl;
            cin>>sign1>>sign2;
            //Map inputs -> outputs
            if (sign1=="Taurus"||sign1== "Virgo"||sign1== "Capricorn"){
                elm1 = "Earth";
            }
            else if (sign1== "Gemini"||sign1== "Libra"||sign1== "Aquarius"){
                elm1 = "Air";
            }
            else if (sign1=="Cancer"||sign1=="Scorpio"||sign1=="Pisces"){
                elm1 = "Water";
            }
            else if (sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius"){
                elm1 = "Fire";
            }

            if (sign2=="Taurus"||sign2== "Virgo"||sign2== "Capricorn"){
                elm2 = "Earth";
            }
            else if (sign2== "Gemini"||sign2== "Libra"||sign2== "Aquarius"){
                elm2 = "Air";
            }
            else if (sign2=="Cancer"||sign2=="Scorpio"||sign2=="Pisces"){
                elm2 = "Water";
            }
            else if (sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius"){
                elm2 = "Fire";
            }
            //Display the outputs
            elm1==elm2?
                cout<<sign1<<" and "<<sign2<<" are compatible "<<elm1<<" signs.":
                cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            break;
        }
        case '0':{
            //Declare Variables
            short year,
                  n1,
                  n10,
                  n100,
                  n1000;
            string out;    
            //Initialize or input i.e. set variable values
            cout<<"Arabic to Roman numeral conversion."<<endl
                <<"Input the integer to convert."<<endl;
            cin>>year;
            n1 = year % 10;
            n10 = year/10 % 10;
            n100 = year/100 % 10;
            n1000 = year/1000 % 10;
            if (!(year >=1000 && year <=3000))
            {
                cout<<year<<" is Out of Range!";
                exit(0);
            }
            //Map inputs -> outputs
            switch(n1000){
                case 3:
                    out +="M";
                case 2:
                    out +="M";
                case 1:
                    out +="M";
            }
            switch(n100){
                case 9:
                    out += "CM";
                    break;
                case 8:
                    out += "DCCC";
                    break;
                case 7:
                    out += "DCC";
                    break;
                case 6:
                    out +="DC";
                    break;
                case 5:
                    out +="D";
                    break;
                case 4:
                    out += "CD";
                    break;
                case 3:
                    out += "CCC";
                    break;
                case 2:
                    out += "CC";
                    break;
                case 1:
                    out += "C";
                    break;
            }    switch(n10){
                case 9:
                    out += "XC";
                    break;
                case 8:
                    out += "LXXX";
                    break;
                case 7:
                    out += "LXX";
                    break;
                case 6:
                    out +="LX";
                    break;
                case 5:
                    out +="L";
                    break;
                case 4:
                    out += "XL";
                    break;
                case 3:
                    out += "XXX";
                    break;
                case 2:
                    out += "XX";
                    break;
                case 1:
                    out += "X";
                    break;
            }    switch(n1){
                case 9:
                    out += "IX";
                    break;
                case 8:
                    out += "VIII";
                    break;
                case 7:
                    out += "VII";
                    break;
                case 6:
                    out +="VI";
                    break;
                case 5:
                    out +="V";
                    break;
                case 4:
                    out += "IV";
                    break;
                case 3:
                    out += "III";
                    break;
                case 2:
                    out += "II";
                    break;
                case 1:
                    out += "I";
                    break;
            }
            //Display the outputs
            cout<<year<<" is equal to "<<out;            
            break;
        }
         
        default:
            cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}
