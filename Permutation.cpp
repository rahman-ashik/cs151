#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 
#include <vector>  // // library for iterating  
#include <algorithm> // library for sorting    
using namespace std; 


void Permutation(int a, int b, int c, int d)
{
  //concatenating all the 4 integers into One single string
  string s1 = to_string(a);  
  string s2 = to_string(b); 
  string s3 = to_string(c) ;
  string s4 = to_string(d) ;
  string s = s1 + s2 + s3 + s4 ; // concatenation done

    vector<string> arrangements; // using vector to make an array of arrangements of permutations 
    sort(s.begin(), s.end());  // sorting 
    do { 
       arrangements.push_back(s); // adding arrangements to the vector array from while condition 
       } while (next_permutation(s.begin(), s.end()));  // using next_permutation to find lexicographically ordered permutation
    
 cout   << arrangements [0] << " " << arrangements [1] << " " << arrangements [2] << " " << arrangements [3] << "\n"
        << arrangements [4]<< " " << arrangements [5]<< " " << arrangements [6]<< " " << arrangements [7] << "\n"
        << arrangements [8] << " " << arrangements [9]<< " " << arrangements [10]<< " " << arrangements [11] << "\n"
        << arrangements [12]<< " " << arrangements [13]<< " " << arrangements [14]<< " " << arrangements [15] << "\n"
        << arrangements [16]<< " " << arrangements [17]<< " " << arrangements [18]<< " " << arrangements [19] << "\n"
        << arrangements [20]<< " " << arrangements [21]<< " " << arrangements [22]<< " " << arrangements [23] << "\n";
}
int main() 
{
    int A,B,C,D;
    cout << "This program shows all the permutations for FOUR given numbers between 0-9" << "\n \n";
    cout << "Input four numbers seperated by spaces:" ;
    cin >> A >> B >> C >> D; 
    cout << "\n \n" ;
    Permutation(A,B,C,D); 
    cout << "\n \n" ;
    return 0;
}


