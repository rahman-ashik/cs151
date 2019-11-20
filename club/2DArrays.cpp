#include <iostream>
#include <string>
using namespace std;

void printArray(int array[][5],int rows); //passing through 2D Array requires 2nd dim to be passed
void printEvenArray(int array[][5],int rows);
void printEvenElementsWithGaps(int array[][5],int rows);
int sumOfArray(int array[][5],int rows);
double avgOfArray(int array[][5],int rows) ;
void searchLinear(int array[][5],int rows,int search);
//int findMinimum(int arr[],int cols);

int main()
{
int const cols =5;
int const rows =2;
int arr1[rows][cols]={{0,2,4,5,15},
					  {0,7,9,5,10}};


printArray(arr1,rows); 
cout << "\n";
printEvenArray(arr1,rows);  
cout << "\n";
printEvenElementsWithGaps(arr1,rows); 
cout << "\n";
cout<< sumOfArray(arr1,rows); 
cout << "\n";
cout<< avgOfArray(arr1,rows); 
cout << "\n";
searchLinear(arr1,rows,4);
cout << "\n";
searchLinear(arr1,rows,7);
cout << "\n";
searchLinear(arr1,rows,10);
cout << "\n";
searchLinear(arr1,rows,11);
cout << "\n";
/*
cout<< searchLinear(arr1,rows,4);
cout << "\n";
cout<< findMinimum(arr1,6);
cout << "\n";
cout<< findMinimum(arr1,rows); 
cout << "\n"; */
}


void printArray(int array[][5],int rows) // to print the whole array
{
for (int i=0; i<rows; i++) //the classic iterator. this is rows iterator
  {
  for (int j=0; j<5 ; j++) // need to iterate through the columns also
    {
        cout <<array[i][j]<<" "; 
    }
    cout <<endl;
  }
}

void printEvenArray(int array[][5],int rows) // to print the even indexes in the array (for loop)
{
for (int i=0; i<rows; i = i+1) //will iterate through each row
	{
  	for (int j=0; j<5 ; j= j+2) // will not iterate thru each row, 
  		{  						// it'll go evenly to skip odd columns
		cout <<array[i][j]<<"  ";
		}
	cout <<endl;
	}
}

void printEvenElementsWithGaps(int array[][5],int rows) // to print the even elements in the array 
{
for (int i=0; i<rows; i = i+1) //will iterate through each row
	{
  	for (int j=0; j<5 ; j= j+1) 
  		{if   (array[i][j]%2==0)
		  	cout <<array[i][j]<<" ";
		 else 
		 	cout << "X "; // it's gonna show 'X' in the odd numbers
		}
	cout <<endl;
	}
}

int sumOfArray(int array[][5],int rows) // to return sum of the elements of an array 
{
int sum=0;
for (int i=0; i<rows; i = i+1) //will iterate through each row
	{
  	for (int j=0; j<5 ; j= j+1) //will iterate through each columns
 		{ 
		 sum = sum+array[i][j]; 
		}
	}
return sum;
}


double avgOfArray(int array[][5],int rows)  // to return average of the elements of an array 
{
//int sum=0;
//for (int i=0; i<cols; i = i+1)
// { sum = sum+array[i]; }
//return sum/cols;
// >>>> all those things can be simplified into this: <<<<
return ((sumOfArray(array,rows)*1.0)/(rows*5)); //multiplying by 1.0 to get a double value 
}


void searchLinear(int array[][5],int rows,int search)
{
int i,j;
for (i=0; i<rows; i = i+1)
    {
  	for (j=0; j<5 ; j= j+1) 
            if (array[i][j]==search)
                        {
                          cout <<  "Found in position: "<< i<<","<<j;
                        }
    }
return;
}
/*
int findMinimum(int arr[],int rows)
{
int min=arr[0];
for (int i=1; i<6;i++)
    {
        if (arr[i]<min)
            min = arr[i];
    }
return min;
}
*/ 