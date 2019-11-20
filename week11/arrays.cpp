#include <iostream>

using namespace std;

void printArray(int array[],int size);
void printEvenArray(int array[],int size);
void printEvenArray2(int array[],int size);
void printOddArray(int array[],int size);
int sumOfArray(int array[],int size);
double avgOfArray(int array[],int size) ;
int searchLinear(int arr[],int size,int search);
int findMinimum(int arr[],int size);

int main()
{
char arr[]={'a','b'};
cout << arr <<endl; // char arrays prints directly

int const size =5;
int arr2[size]={0,2,4,5};
int arr3[6]={50,22,74,51,62,102};

printArray(arr2,size); //0 | 2 | 4 | 5 | 0
cout << "\n";
printEvenArray(arr2,size);  //0 | 4 | 0 |
cout << "\n";
printEvenArray2(arr2,size); //0 | 4 | 0 |
cout << "\n";
printOddArray(arr2,size);     //2 | 5 |
cout << "\n";
cout<< sumOfArray(arr2,size); //11
cout << "\n";
cout<< avgOfArray(arr2,size); //2.2
cout << "\n";
cout<< searchLinear(arr2,size,5);//3
cout << "\n";
cout<< searchLinear(arr2,size,4);//2
cout << "\n";
cout<< findMinimum(arr3,6); //22
cout << "\n";
cout<< findMinimum(arr2,size); //0
cout << "\n";
return 0;
}


void printArray(int array[],int size) // to print the whole array
{
for (int i=0; i<size; i++) //the classic iterator.
  if (i==size-1) // if i reaches the last element
    cout <<array[i]<<" "; //so that the last " | " doesn't show up
  else
    cout <<array[i]<<" | "; // so that " | " shows up untill it reaches the last element 
}

void printEvenArray(int array[],int size) // to print the even indexes in the array (for loop)
{
for (int i=0; i<size; i = i+2)
  cout <<array[i]<<" | ";
}

void printEvenArray2(int array[],int size) // to print the even indexes in the array (do + if)
{
int i=0; 
do {
     if  (i%2==0){
                  cout <<array[i]<<" | ";
                  }
     i = i+1;
    }while (i<size);

}

void printOddArray(int array[],int size) // to print the odd indexes in the array
{
for (int i=1; i<size; i = i+2)
  cout <<array[i]<<" | ";
}

int sumOfArray(int array[],int size) // to return sum of the elements of an array 
{
int sum=0;
for (int i=0; i<size; i = i+1)
 { sum = sum+array[i]; }
return sum;
}

double avgOfArray(int array[],int size)  // to return average of the elements of an array 
{
/*
int sum=0;
for (int i=0; i<size; i = i+1)
 { sum = sum+array[i]; }
return sum/size;
*/
// all those things can be simplified into this:
return (sumOfArray(array,size)*1.0)/size; //multiplying by 1.0 to get a double value 

}


int searchLinear(int arr[],int size,int search)
{
for (int i=0; i<size; i = i+1)
    {
            if (arr[i]==search)
                        {
                          return  i;
                        }
    }
return -1;
}

int findMinimum(int arr[],int size)
{
int min=arr[0];
for (int i=1; i<6;i++)
    {
        if (arr[i]<min)
            min = arr[i];
    }
return min;
}