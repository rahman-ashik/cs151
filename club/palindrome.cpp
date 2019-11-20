//This program checks for a string if its a plaindrome or not
//for now it will show how and what it is comparing.
//the function will be transformed into a bool later.
//Anatomy:
	//finds the size of the string.
	//determines if there's even or odd number of characters in the string.
	//if even, compares divided characters from front and back till it reaches middle.
	//if not even, ignores middle character, compares divided characters from front and back till it reaches middle.


//Constraints and bugs:
	//1# its ignoring the fact that the string is mixed uppercases with lowercases
	//2# it is taking spaces as valid characters in the test string

#include <iostream>
using namespace std;


void checkPalindrome(string s);

int main()
{
checkPalindrome("BYB"); //odd
checkPalindrome("cnnc"); //even
checkPalindrome("racecar");
checkPalindrome("school");
checkPalindrome("rotator");
checkPalindrome("topspot");
checkPalindrome("level");
checkPalindrome("satorrotas");
checkPalindrome("REDDER");
}





void checkPalindrome(string s) //its void, because of debugging purpose, should be bool
{
bool isPalin; //will use it later
int n=s.size(); //checking the size of the string

if (n%2==0) //even sized string be divided into two and tested
	{	
	cout <<"For "<<s<<": Will check evenly!\n";  
	int i=n/2;   //n=4,i=2
		for (int step=0,backstep=n-1;(backstep>=i&&step<i);step++,backstep--) //true for step: 0,1
				{
				cout<<"compare "<< s[step]<<" with "<< s[backstep]<<"\n";
				}
	}

else //odd sized string's middle one is not compared but the rest is compared 
	{
	cout <<"For "<<s<<": Will check Oddly!\n";  
	int i=(n-1)/2;
		for (int step=0,backstep=n-1;(backstep>=i&&step<i);step++,backstep--) //true for step: 0,1
				{
				cout<<"compare "<< s[step]<<" with "<< s[backstep]<<"\n";
				}
	
	}
}
