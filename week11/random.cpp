#include<iostream> 
#include<cstdlib> 
#include<ctime> 

using namespace std;


int main()
{
unsigned seed = time (0);

srand(seed);
cout << seed << endl;
cout << rand() <<endl;
cout << rand() <<endl;
cout << rand() <<endl;
cout << rand() <<endl;
cout << rand() <<endl;
cout << "================================" <<endl;
cout << (rand() % (200 -100 + 1)) + 100 <<endl;
cout << (rand() % (200 -100 + 1)) + 100 <<endl;
cout << (rand() % (200 -100 + 1)) + 100 <<endl;
cout << (rand() % (200 -100 + 1)) + 100 <<endl;
cout << (rand() % (200 -100 + 1)) + 100 <<endl;
return 0;
}

