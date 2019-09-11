/*
Name: Md Rahman
Date: 09/12/2019
Assignment: assignment1  
*/

//include extra library, this is a pre-processor directive
#include<iostream> 
#include<string>

using namespace std;  

//Every C++ program MUST have at least one function named main()
// Creating a function // 
int main()    // this line is the header
    {               // this line starts the body
            string firstName; //declaring all necessary variables
            string lastName;
            int age;
            int feetOfHeight;
            int inchesOfHeight;
            int weight;

            cout << "Enter your first name: "; // asking user the first name
            cin >> firstName ; 
            cout << "\n";
            cout << "You wrote:" << firstName; // feedbck of what user put for the first name
            cout << "\n";

            cout << "Enter your last name: "; // asking user the last name
            cin >> lastName ; 
            cout << "\n";
            cout << "You wrote:" << lastName << "\n" << "\n" ; // feedbck of what user put for the last name

            cout << "Enter your age:"; // asking user the age
            cin >> age ; 
            cout <<"Your age is:" << age <<"\n"<<"\n" ;  // feedbck of what user put for the age
          

    }               // this line ends the body