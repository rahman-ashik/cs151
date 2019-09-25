/* Date: 09/19/2019
 Assignment: area calculator  
 Details: this program will calculate average of three number prompting from the user
*/

//include extra library, this is a pre-processor directive
#include<iostream> 
using namespace std;  

//Every C++ program MUST have at least one function named main()
// Creating a function // 
int main()      // this line is the header
{               // this line starts the body
    int x;
    int y;
    int z;
    double avg;
    
    cout << "This program calculates the average of three numbers \n\n\n "; // a general introduction

    cout << "Please enter the first number: "; //prompting for the first number
    cin >> x;
    cout << "Please enter the second number: "; //prompting for the second number
    cin >> y; 
    cout << "Please enter the third number: "; //prompting for the third number
    cin >> z;
    avg = (x + y + z)/3.0  ; // calculating the average

    cout << "\n\nThe average of " << x << ", " << y <<  " and "<< z << " is:  " << avg << ".\n\n"; // showing the result to user
    return 0; 
}               // this line ends the body