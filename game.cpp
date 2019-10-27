#include<iostream>  
#include<iomanip>
using namespace std;  



void display()
{
	cout<<" 1   2   3 \n";
	for(int a = 0; a< 3; a++)
	{
		cout <<"┌─┐ ┌─┐ ┌─┐ " << "\n"; 
        cout <<"│ │ │ │ │ │ " << "\n"; 
        cout <<"└─┘ └─┘ └─┘ " << "\n"; 
	}
}



int main ()
{
display();
}