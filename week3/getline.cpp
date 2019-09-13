/*
 Name: Md Rahman
 Date: 09/12/2019
 Assignment: get line 
 Details: this program will prompt user to get name and city, 
 then it will show the information appropriately with the help of using getline function.
*/

//include extra library, this is a pre-processor directive
#include<iostream> 
using namespace std;  

//Every C++ program MUST have at least one function named main()
// Creating a function // 
int main()      // this line is the header
{               // this line starts the body
    string name;
    string city;

    cout << "Please enter your name: "; 
    //cin >> name; ---> this will cause loss of info after any space
    getline(cin,name);

    cout << "Please enter your city: "; 
    //cin >> city; ---> this will cause loss of info after any space
    getline(cin,city);


    cout << " Welcome " << name <<" from " << city << "\n\n\n";

    return 0; 
}               // this line ends the body