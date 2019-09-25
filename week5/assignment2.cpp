/*
Name: Md Ashikur Rahman
Date: 09/29/2019 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Assignment: assignment2 
*/

//include extra library, this is a pre-processor directive
#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 

using namespace std;  

// placing functions prototypes
void Echo();
int SumOfThree();
void SquarePerimeter();
void CapitalI();

//Every C++ program MUST have at least one function named main()
//here is the main() function
int main() 
{
    Echo(); //calling all the function one by one
    SumOfThree();
    SquarePerimeter();
    CapitalI();
    return 0;
}



void Echo() // function for displaying msg twice on separate lines 
{
    string msg;
    cout << "Enter your message: " << endl;
    cin >> msg;
    cout << msg <<endl << msg << endl;
}

int SumOfThree() // function for returning the sum of three consecutive integers starting from user's choice
{
    int n;
    cout << "Enter the first value of three consecutive numbers:" << endl;
    cin >> n ;
    cout << "Sum of " << n<<", "<< n+1<<" and " << n+2<<" is : "<<3*n+3<< endl; //sum of three consecutive numbers=(3n+3)
}

void SquarePerimeter() // function for returning the perimeter of a square, taking input for one side, from user
{
    double side;
    cout << "Enter one side of the square:" << endl;
    cin >> side ;
    cout << "Perimeter of the square with sides of " << side<<" units "<<" is : "<<4*side<< " units "<< endl;
}

void CapitalI() // function for displaying a specific design
{
    cout << setfill('*') << setw(8) << "\n";
    cout << setfill('*') << setw(8) << "\n";
    cout << "  " << setfill('*') << setw(4) << "\n";
    cout << "  " << setfill('*') << setw(4) << "\n";
    cout << "  " << setfill('*') << setw(4) << "\n";
    cout << "  " << setfill('*') << setw(4) << "\n";
    cout << setfill('*') << setw(8) << "\n";
    cout << setfill('*') << setw(8) << "\n";
}





