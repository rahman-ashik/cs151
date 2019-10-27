#include<iostream>
using namespace std;
int num = 30; // global
void printme();

int main()
{
cout << "value of a is :" << num << endl; // 30
int num = 10; // local
{
int num = 5; // local
printme(); // 30
cout << "value of a is :" << num << endl; // 5
}
cout << "value of a is :" << num << endl; // 10
printme(); // 30
return 0;
}

void printme()
{
cout << "printme says value of a is :" << num << endl; // ?
}