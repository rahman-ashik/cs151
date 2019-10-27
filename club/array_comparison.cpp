// It will compare two int arrays and iterate through the elements and find if any two elements sums up to 9
// Then it will display the elements as an expression of summation




#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
int arr1[5]= {1, 2, 3, 4, 5};
int arr2[5]= {6, 7, 8, 9, 10};

int i=0;

for (int i=0; i<5; i++)
        { for (int j=0; j<5;)
            {int sum = arr1[i] + arr2[j];
              if (sum==9)
              cout << arr1[i] <<" + "<< arr2[j]<<" = "<< sum << "\n";}
    
        }



return 0;
}
