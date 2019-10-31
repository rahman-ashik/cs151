#include<iostream> 

using namespace std; 


int main()
{
int num;

cout << "Enter a number between [1,10] \n" ;
cin >> num;

while ( (num < 1 ) || (num > 10 ))
{
cout << " Invalid !";
cout << "Enter a number between [1,10] \n" ;
cin >> num;
}



}