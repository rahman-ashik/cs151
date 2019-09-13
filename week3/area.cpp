/*
 Name: Md Rahman
 Date: 09/12/2019
 Assignment: area calculator  
 Details: this program will pronmt user to get length and width of rectangle, 
 then it will calculate and print the area of a rectangle.
*/

//include extra library, this is a pre-processor directive
#include<iostream> 
using namespace std;  

//Every C++ program MUST have at least one function named main()
// Creating a function // 
int main()      // this line is the header
{               // this line starts the body
    int area;
    int length;
    int width;
    
    cout << "This program calculates the area of a rectangle \n\n\n "; // a general introduction

   /* cout << "Please enter the width of the rectangle: "; //prompting for the width
    cin >> width ; 

    cout << "Please enter the length of the rectangle: "; //prompting for the length
    cin >> length ;
    */

    cout << "Please enter the width and the length of the rectangle seperated by space: "; //prompting for the width
    cin >> width >> length;

    area = width * length; // calculating the area

    cout << "\n\nThe area of the rectangle is:  " << area << ".\n\n"; // showing the result to user
    return 0; 
}               // this line ends the body