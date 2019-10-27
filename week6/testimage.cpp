#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 

using namespace std;  

void imageLine1() ;
void imageLine2() ;
void Image() ;

int main() 
{
    cout << "\n";
    Image() ;
    cout << "\n";
    return 0;
}
void imageLine1() //a function to use in Image() function
{
    int n=5;
    for (int i=0; i<n; i++)
        {
        cout<<"********    " ;
        }
    cout << endl ;
}   

void imageLine2() //another function to use in Image() function
{
    int n=10;
    for (int i=0; i<n; i++)
        {
        cout<<"**    " ;
        }
    cout << endl ;  
}

void Image() // a function to print an image 
{   
    imageLine1 ();
    imageLine1 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine1 ();
    imageLine1 ();
    cout << endl ; 

    imageLine1 ();
    imageLine1 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine1 ();
    imageLine1 ();
    cout << endl ; 

    imageLine1 ();
    imageLine1 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine2 ();
    imageLine1 ();
    imageLine1 ();
    cout << endl ; 

    return;
}
