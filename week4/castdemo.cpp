/*
                            Name: Md Rahman
                            Date: 09/10/2019
                            Assignment: castdemo
                            Program: This program will demonstrate the use of casting  
*/

#include<iostream> 

using namespace std;  

int main()      
{               
    char ch1 = 'T';
    char ch2 = 'U';
    char ch3 = 'V';

    cout << "ch1 is " << static_cast<int>(ch1) << "\n" ;
    cout << "ch2 is " << static_cast<int>(ch2) << "\n" ;
    cout << "ch3 is " << static_cast<int>(ch3) << "\n" ;
   
    return 0; 
}               // this line ends the body