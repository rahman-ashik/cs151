/*
Name: Md Ashikur Rahman
Date: 11/12/2019 
Assignment: assignment2.redo
*/

//include extra library, this is a pre-processor directive
#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 
#include<cmath>     // library for power and sqrt operation
#include<string>

using namespace std;  

// placing functions prototypes
void Echo(string);
int SumOfThree(int);
void SquarePerimeter(double);
void CapitalI();
void NextNextCharacter(char &ch);
bool OddMult3(int);
void PerfectSquare();
double RectangleArea(double, double);
void Swap(double &x, double &y);
double Quadratic(double, double, double, double);
string Name();
bool LesserAbsolute(int ,int );
void SwapFour(char &r ,char &s,char &t ,char &u);
bool LeapYear(int);
double Distance2D(double,double,double,double);
void Invite(string,string,string ,string,string,string,string);
void NumberSwap(double &x, double &y);
void Permutation(int, int, int, int);
void imageLine1() ;  // this is an extra function
void imageLine2() ;  // this is an extra function
void Image() ;


//Every C++ program MUST have at least one function named main()
//here is the main() function
int main() 
{
    cout << "==============================Echo()==============================" <<"\n";
    Echo("This is an example message which will be displayed twice"); // calling this function by passing example parameter
    cout << "==============================SumOfThree()==============================" << "\n";
    cout << SumOfThree(3) <<"\n";              // calling this function by passing example parameter 3
    cout << "\n";
    cout << "=============================SquarePerimeter()==========================" << "\n";
    SquarePerimeter(2);         // calling this function by passing example parameter 2 
    cout << "=============================== CapitalI()======================" << "\n";
    cout << "\n";
    CapitalI();
    cout << "\n";
    cout << "============================NextNextCharacter()======================" << "\n";
    char refch = 'h';
    cout << "Before NextNextCharacter() function call : " << refch << "\n";
    NextNextCharacter(refch);   //calling this function by passing example reference char parameter 'h'
    cout << "After NextNextCharacter() function call : " << refch << "\n";
    cout << "============================OddMult3()========================" << "\n";
    cout << OddMult3(36);       //calling this function by passing example parameter 36 
    cout << "\n";
    cout << OddMult3(27);        //calling this function by passing example parameter 27 
    cout << "\n";     
    cout << "============================PerfectSquare()============================" << "\n";
    cout << "\n";
    PerfectSquare();            //calling to show a perfect square made of *
    cout << "============================RectangleArea()=========================" << "\n";
    cout << RectangleArea(2.5, 3.5) << "\n";
    cout << "===============================Swap()==========================" << "\n";
    cout << "Swapping function called here... "<< endl;
    cout << "\n";
    double num1= 5.258; 
    double num2 = 12.369;
    cout << "In main before Swap() call num1 =" << num1 << " and " << " num2 = " << num2 << "\n";
    Swap(num1, num2);
    cout << "In main after Swap() call num1 =" << num1 << " and " << " num2 = " << num2 << "\n";
    cout << "===========================Quadratic()===========================" << "\n";
    cout << Quadratic(-2.5, 7.3, -3.5, 1);
    cout << "\n";
    cout << "============================Name()===============================" << "\n";
    cout << "\n";
    cout << Name()<< "\n";
    cout << "\n";
    cout << "===========================LesserAbsolute()===============================" << "\n";
    cout << LesserAbsolute(-9, 10) << "\n";
    cout << LesserAbsolute(-19, -10)<< "\n";
    cout << "===========================SwapFour()=============================" << "\n";
    char char1 = 'L';
    char char2 = 'A';
    char char3 = 'P';
    char char4 = 'D';
    cout << "Value of reference characters before SwapFour() function call:  "<<char1<<", "<<char2<<", "<<char3<<", "<<char4 <<" ." << "\n";
    SwapFour( char1, char2, char3, char4);
    cout << "Value of reference characters After SwapFour() function call:  "<<char1<<", "<<char2<<", "<<char3<<", "<<char4 <<" ." << "\n";
    cout << "============================LeapYear()==============================" << "\n";
    cout << "\n";
    cout << LeapYear(2000) << "\n";
    cout << LeapYear(1900) << "\n";
    cout << LeapYear(2018) << "\n";
    cout << LeapYear(2020) << "\n";
    cout << "=============================Distance2D()===========================" << "\n";
    cout << Distance2D(3.1, 4.5, 4.2, 3.8)<< "\n";
    cout << "===============================Invite()===========================" << "\n";
    cout << "\n";
    cout << "\n";
    Invite( "John Doe", "Reunion", "MEC Alumni Association" , "MEC Central Auditorium", "Saturday", "11 A.M." , "reunion2019@mec.edu");
    cout <<  "\n";
    cout <<  "\n";
    cout << "=========================NumberSwap()=============================" << "\n";
    cout << "In main before NumberSwap() call num1 =" << num1 << " and " << " num2 = " << num2 << "\n";
    NumberSwap(num1, num2);
    cout << "In main after NumberSwap() call num1 =" << num1 << " and " << " num2 = " << num2 << "\n";
    cout << "=========================Permutation()=============================" << "\n";
    Permutation(1,2,3,4);
    cout << "=========================Image()=============================" << "\n";
    Image() ;
    cout << "===================================================================" << "\n";
    return 0;
}



void Echo(string msg) // function for displaying msg twice on separate lines 
{
    cout << msg << endl << msg << endl;
}

int SumOfThree(int n) // function for returning the sum of three consecutive integers starting from user's choice
{
    return ((3*n)+3); //sum of three consecutive numbers=(3n+3)
}

void SquarePerimeter(double side) // function for displaying the perimeter of a square, taking input from the parameter
{
    cout << "Perimeter of the square with sides of " << side<<" units "<<" is : "<<4*side<< " units "<< endl;
}

void CapitalI() // function for displaying a specific design
{
    cout << " * * * * * * * *"<< "\n";
    cout << " * * * * * * * *"<< "\n";
    cout << "     * * * *"<< "\n";
    cout << "     * * * *"<< "\n";
    cout << "     * * * *"<< "\n";
    cout << "     * * * *"<< "\n";
    cout << " * * * * * * * *"<< "\n";
    cout << " * * * * * * * *"<< "\n";
    cout << endl;
}

void NextNextCharacter(char &ch) // function for assigning a char's ASCII value added 2 
{
 ch = ((int)ch)+2 ;
}

bool OddMult3(int value) // function for testing a parameter to be an odd multiplier of 3
{
return ((value%3==0) && (value%2==1)) ;   //(value%3==0) is tesing the value is a multiple of 3; and (value%2==1) is testing the value for being an odd number
}

void PerfectSquare() // function to display a 9 by 9 square of asterisks
{
    for(int i=0;i<9;i++)
    {
      cout << "* * * * * * * * * " << endl; 
    }

}

double RectangleArea(double width, double length)
{
return width*length;
}

void Swap(double &x, double &y)
{
 double temp1 = x;
 double temp2 = y;
 x = temp2 ;
 y = temp1 ;
}

double Quadratic(double a,double b,double c,double x)
{
   return  (a*x*x + b*x + c) ;
}

string Name()
{
    string firstName, lastName;
    cout <<"Enter your first name: " ;
    cin >> firstName;
    cout << "\n";
    cout << "Enter your last name: " ;
    cin >> lastName;
    cout << "\n";
    //string fullName= lastName + ", " + firstName ;
    return (lastName + "," + firstName);
}

bool LesserAbsolute(int m,int n)
{
return (m*m < n*n) ;
}

void SwapFour(char &r ,char &s,char &t ,char &u)
{
char m = r;
char n = s;
char o = t;
char p = u;
r = p;
s = o;
t = n;
u = m;
}

bool LeapYear(int year) 
{
return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

double Distance2D(double x1 ,double y1 ,double x2 ,double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void Invite(string name1 ,string theme,string name2 ,string place,string weekday,string time ,string email)
{
cout << "Dear " << name1 <<","<< "\n" <<
        "You are invited to a "<< theme <<" party hosted by "<<name2<<"!"<< "\n" <<
        "It’s going to be at "<<place<<" on "<< weekday<<". "<< "\n" <<
        "Please make sure to show up at "<<time<<"." << "\n" <<
        "RSVP at "<<email<< "\n" ;
}

void NumberSwap(double &x, double &y)
{
 x = x * y ;  // x becomes xy
 y = x / y ;  // y becomes (xy/y)=x
 x = x / y ;  // x becomes (xy/x)=y
}

void Permutation(int a, int b, int c, int d)
{
cout    << "("<<a<<","<<b<<","<<c<<","<<d<<") "<<"("<<a<<","<<b<<","<<d<<","<<c<<") "<<"("<<a<<","<<c<<","<<b<<","<<d<<") "<<"("<<a<<","<<c<<","<<d<<","<<b<<") \n"<<
"("<<a<<","<<d<<","<<b<<","<<c<<") "<<"("<<a<<","<<d<<","<<c<<","<<b<<") "<<"("<<b<<","<<a<<","<<c<<","<<d<<") "<<"("<<b<<","<<a<<","<<d<<","<<c<<") \n"<<
"("<<b<<","<<c<<","<<a<<","<<d<<") "<<"("<<b<<","<<c<<","<<d<<","<<a<<") "<<"("<<b<<","<<d<<","<<a<<","<<c<<") "<<"("<<b<<","<<d<<","<<c<<","<<a<<") \n"<<
"("<<c<<","<<a<<","<<b<<","<<d<<") "<<"("<<c<<","<<a<<","<<d<<","<<b<<") "<<"("<<c<<","<<b<<","<<a<<","<<d<<") "<<"("<<c<<","<<b<<","<<d<<","<<a<<") \n"<<
"("<<c<<","<<d<<","<<a<<","<<b<<") "<<"("<<c<<","<<d<<","<<b<<","<<a<<") "<<"("<<d<<","<<a<<","<<b<<","<<c<<") "<<"("<<d<<","<<a<<","<<c<<","<<b<<") \n"<<
"("<<d<<","<<b<<","<<a<<","<<c<<") "<<"("<<d<<","<<b<<","<<c<<","<<a<<") "<<"("<<d<<","<<c<<","<<a<<","<<b<<") "<<"("<<d<<","<<c<<","<<b<<","<<a<<") \n" ;
}

void imageLine1() //a function to use in Image() function
{
    int n=5;
    for (int i=0; i<n; i++)
        {
        cout<<"********    " ; // this loop will show the output stream 5 times
        }
    cout << endl ;
}   

void imageLine2() //another function to use in Image() function
{
    int n=10;
    for (int i=0; i<n; i++)
        {
        cout<<"**    " ;   // this loop will show the output stream 10 times
        }
    cout << endl ;  
}

void Image() // a function to print an image 
{   
    imageLine1 ();
    imageLine1 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine1 ();
    imageLine1 ();
    cout << endl ; 

    imageLine1 ();
    imageLine1 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine1 ();
    imageLine1 ();
    cout << endl ; 

    imageLine1 ();
    imageLine1 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine1 ();
    imageLine1 ();
    cout << endl ; 

    return;
}