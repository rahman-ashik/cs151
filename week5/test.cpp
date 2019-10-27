#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 

using namespace std;  
void PerfectSquare();

int main() 
{
    cout << "\n";
    cout << "\n";
    PerfectSquare();
    cout << "\n";
}
void PerfectSquare() // function to display a 9 by 9 square of asterisks
{
    for(int i=0;i<9;i++)
    {
    cout << "* * * * * * * * * " * 5 << endl;
     ////////////////// not showing 9 by 9 ////////////// have to fix it
    }


}
