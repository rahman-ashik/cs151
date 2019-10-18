#include "mylib.h"
#include<iostream>
#include<iomanip>
using namespace std;

void Image();
string Image2();
string Image3(string);



int main()
{
Image();
cout << " ======================================================== \n" ;
cout << Image2();
cout << " ======================================================== \n" ;
cout << Image3("This line would be placed in-between rows");
cout << my_perimeter(1.5, 2.5); 
cout << my_area(1.5, 2.5); 
return 0;
}



void Image()
{
    string line1= "********    ********    ********    ********    ******** \n";
    string line2= "**    **    **    **    **    **    **    **    **    ** \n";
    
    cout << line1  << line1 << line2 << line2 << line2 << line2 << line1 << line1 << "\n";
    cout << line1  << line1 << line2 << line2 << line2 << line2 << line1 << line1 << "\n";
    cout << line1  << line1 << line2 << line2 << line2 << line2 << line1 << line1 << "\n";
}


string Image2()
{
    string line1= "********    ********    ********    ********    ******** \n";
    string line2= "**    **    **    **    **    **    **    **    **    ** \n";
    return line1  + line1 + line2 +line2 + line2 + line2 + line1 + line1 + "\n" 
         + line1  + line1 + line2 + line2 + line2 + line2 + line1 + line1 + "\n" 
         + line1 +line1 + line2 + line2 + line2 + line2 + line1 + line1 + "\n";
}

string Image3(string inRowMsg)
{
    string line1= "********    ********    ********    ********    ******** \n";
    string line2= "**    **    **    **    **    **    **    **    **    ** \n";
    return line1  + line1 + line2 +line2 + line2 + line2 + line1 + line1  + inRowMsg + "\n"
    + line1  + line1 + line2 + line2 + line2 + line2 + line1 + line1 + inRowMsg + "\n"
    + line1 +line1 + line2 + line2 + line2 + line2 + line1 + line1 + "\n" ;
}