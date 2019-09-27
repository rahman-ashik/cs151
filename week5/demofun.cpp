#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 

using namespace std;  
void printFun1(); // placing funtion prototype
void printNum(double num);

int main() 
{
    printFun1(); // calling the function
    cout << "hello from main function"<<endl;
    printFun1(); // calling the function
    printNum(3); 
    printNum(10); 
    printNum(22.5); 
    return 0;
}

void printFun1() // defining the function
{
    cout << "hello from printFun1 " << endl;
    return;
}

void printNum(double num)
{
    cout << "The value of the number is: " << num << endl;
}