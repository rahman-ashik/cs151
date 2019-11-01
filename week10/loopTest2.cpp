#include<iostream> 
using namespace std;

void printName(string);
void printName2(string);

int main()
{
printName("ha");
printName2("ho");
}



void printName(string s)
{
int n=0;
 while (n<10)
        {
            cout << s<< "\n"; 
            n++;
        }

}

void printName2(string s)
{
int n=0;
 do 
        {
            cout << s<< "\n"; 
            n++;
        } while (n<10);

}
