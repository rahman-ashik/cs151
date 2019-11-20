
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>



using namespace std;

double Variance(double data[], int  n);
void Counter(int start,int end,int step);
void Reverse(double arr[],int n);
void ToCase(string &str,bool n);
int ConsecutiveSquaresSum(int n);
void Shift(int data[] ,int n ,int shft);

int main()
{
cout << "============= Variance() ===============" << endl;
double dummyArr[]={17,15,23,7,9,13};
cout << "If we try 17,15,23,7,9,13 the function returns: "<< Variance(dummyArr,6) << endl;
cout << "============= Counter() ===============" << endl;
cout << "If we try 1,10,2 the function returns: ";
Counter(1,10,2);
cout <<"\n";
cout << "If we try 2,10,2 the function returns: ";
Counter(2,10,2);
cout <<"\n";
cout << "================= Reverse() ===================" << endl;
Reverse(dummyArr,6); 
cout <<"The array which is being passed through is: dummyArr[]={17,15,23,7,9,13} \n";
cout <<"Now the reversed array is : ";
for (int i=0; i<6; i++){cout << dummyArr[i] << " | ";} 
cout <<"\n";
cout << "================= ToCase() ===================" << endl;
cout <<"If we try (\"MotoRola\",1) as parameters: ";
string dummystr="MotoRola";
ToCase(dummystr,1);
cout <<dummystr<<"\n";
cout <<"If we try (\"MotoRola\",0) as parameters: ";
ToCase(dummystr,0);
cout <<dummystr;
cout << "================= ConsecutiveSquaresSum() ===================" << endl;
cout <<"Passing 3 from through this function: "<<ConsecutiveSquaresSum(3)<<endl;
cout <<"Passing -3 from through this function: "<<ConsecutiveSquaresSum(-3)<<endl;
cout << "================= Shift() ===================" << endl;
int data[]={1,2,3,4,5,6,7,8};
for (int i=0; i<8; i++){cout << data[i] << " | ";} 
cout <<"\n";
Shift(data,8,2);
for (int i=0; i<8; i++){cout << data[i] << " | ";} 
return 0;
}


double Variance(double data[], int  n) // variance type is population variance
{
int sum = 0; 
    for (int i = 0; i < n; i++)             //iterating through the elements and
        sum += data[i];                     // adding it 
    double mean = (double)sum / (double)n;  // getting the average of elements
double sqDiff = 0;                          //this is the numerator of the variance formula
    for (int i = 0; i < n; i++)                                   //iterating through the elements and 
        sqDiff = sqDiff + ((data[i] - mean) *  (data[i] - mean)); //substracting mean from it, doubling it, then adding to sqDiff
return sqDiff / n; 
}

void Counter(int start,int end,int step)
{
for (int n= start;n<=end;n=n+step)
    cout << n << " ";
}

void Reverse(double arr[],int n)
{
double tempArr[n]; //this array will hold all the elements temporarily
for (int i = 0; i < n; i++)   
    { 
            tempArr[i]=arr[i]; // the temporary is taking carbon copy of the input array
    }
for (int i=0; i<n; i++)
	{
		arr[i]=tempArr[n-i-1]; // now the input array is being changed matching reverse elements from the temp array
	}
}

void ToCase(string &str,bool n)
{
string changedStr=""; //used as a temp for storing a changed string
char changedChar; //used as a temp for testing each character of the string
if (n==1)
			{
				for (int i=0; i<str.length();i++ ) //iterating each character
        		{
				changedChar=(tolower(str[i])); //changing to lowercase
				changedStr=changedStr+changedChar; //adding lowercases to a temp variable 
				}
				str = changedStr;//parameter variable is taking over the value from the temp variable 
			}
else 
			{
				for (int i=0; i<str.length();i++ ) //iterating each character
        		{
				changedChar=(toupper(str[i])); //changing to uppercase
				changedStr=changedStr+changedChar; //adding uppercases to a temp variable 
				}
				str = changedStr;//parameter variable is taking over the value from the temp variable 
			}
}

int ConsecutiveSquaresSum(int n)
{
n=abs(n);
int sum=0;
for (int i=1; i<=n; i++ )
	{
		sum = sum + i*i;
	}
return sum;
}

void Shift(int data[] ,int n ,int shft)
{
int tempArr[n]; 
if (shft==n||shft==0)
 cout<<"No change !!!";
else{
	for (int i = 0; i < n; i++)   
		{ 
		tempArr[i]=data[i];
		} 
	int x=n-shft; 
	for (int i=x,j=0; i<n; i++,j++)
		{ 
		data[j]=tempArr[i]; 
		} 
	for (int i=0,j=2; i < x; i++,j++)
		{ 
		data[j]=tempArr[i];
		}  
	}
}  




