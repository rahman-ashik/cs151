#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 


using namespace std;  
void displayTwoNumbers(int num, double total); // placing funtion prototype
void showSum(int,int,int);
int promtAndStore(string message);

int main() 
{
    int result;
    displayTwoNumbers(9, 0); 
    showSum(10, 20, 30);
    result= promtAndStore("enter your number to save: ");
    cout << " You saved the number: " << result << endl;
    return 0;
}

void displayTwoNumbers(int num, double total)
{
    total= num+2;
    cout << "The sum of the numbers is: " << total << endl;
}

void showSum(int num1, int num2, int num3)
{
    int total;
    total= num1+num2+num3;
    cout << "The sum of the numbers is: " << total << endl;
}

int promtAndStore(string message)
{
    int r;
    cout << message << endl;
    cin >> r;
    return r;
}