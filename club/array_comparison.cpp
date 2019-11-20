#include<iostream>
using namespace std;

void sumCheck(int arr1[], int size1, int arr2[], int size2);

int main()
{
int arr1[5]= {1, 2, 3, 4, 5};
int arr2[5]= {6, 7, 8, 9, 10};

sumCheck(arr1, 5, arr2, 5);

return 0;
}


void sumCheck(int arr1[], int size1, int arr2[], int size2)
{
// It will compare two int arrays and iterate through the elements 
//and find if any two elements sums up to 9
// Then it will display the elements as an expression of summation	
cout << "Criss-cross comparison:\n";
for (int i=0; i<size1; i++) 
        { for (int j=0; j<size2;j++)
            {int sum = arr1[i] + arr2[j]; //criss-cross comparison
              if (sum==9)
              cout << arr1[i] <<" + "<< arr2[j]<<" = "<< sum << "\n";}
    
        } //a nested loop will iterate all the postion comparing each elements with other 
		  //regardless of their position, it will compare all of them

//if we want to compare position by position:
cout << "Parallel comparison:\n";
for (int i=0, j=0; (j<size2 && i<size1); i++,j++) //straight line comparison
        {int sum = arr1[i] + arr2[j];
              if (sum==9)
              cout << arr1[i] <<" + "<< arr2[j]<<" = "<< sum << "\n";
		}// Making one single loop will compare only position by position. 
}