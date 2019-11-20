/*
Name: Md Ashikur Rahman
Date: 10/27/2019 
Assignment: assignment3 
*/

//include extra library, this is a pre-processor directive
#include<iostream>  // library for handling input - output streams 
using namespace std;  

double AbsoluteValue(double);  
void SwapIfGreater(int &x,int &y);  
double Maximum(double,double,double);  
string EvenOdd(int);  
char ToUppercase(char);  
void Decrement(int &n);  
string RightAngleQuadrilateral(double , double);  
double Distance(double, double);  
bool MultipleOf(int , int );  
string BoolToString(bool);  
string ColorCode(int );  
string LetterGrade(double);  
void Sort(double &x, double &y, double &z);  
int QuadraticSolutions(double, double, double);  
string DayOfTheWeek(int);  
double TemperatureConverter(double , char , char );  
int Median(int,int,int,int,int);  
string DateFormat(int , int , int );  
int AbsoluteFactorial(int);   
 

int main()  
{  
cout << "============= AbsoluteValue() ===============" << endl;  
cout << "Trying 2.5 to pass through this function: " << AbsoluteValue(2.5) << endl;  
cout << "Trying -0.5 to pass through this function: " << AbsoluteValue(-0.5) << endl;  
cout << "Trying 0.00 to pass through this function: " << AbsoluteValue(0.00) << endl;  
cout << "============= SwapIfGreater() ===============" << endl;  
int num1=2, num2=3;  
cout << "Trying x=2, y=3 to call SwapIfGreater"<< endl;  
SwapIfGreater(num1,num2);  
cout << "Now x is "<< num1 <<" and y is "<< num2 << endl;  
int num3=4;  
cout << "Again Trying x=4, y=3 to call SwapIfGreater"<< endl;  
SwapIfGreater(num3, num2);  
cout << "Now x is "<< num3 <<" and y is "<< num2 <<" (it swapped!)" <<endl;  
cout << "================= Maximum() ===================" << endl;  
cout << "Trying 2.5, 7.5 and 5.75 the function returns:" << Maximum(2.5,7.5,5.75)<< endl;  
cout << "Trying 7.5, 7.5 and 5.75 the function returns:" << Maximum(7.5,7.5,5.75)<< endl;  
cout << "Trying 7.5, 7.5 and 7.75 the function returns:" << Maximum(7.5,7.5,7.75)<< endl;  
cout << "================= EvenOdd() ===================" << endl;  
cout << "Trying 4 to pass through this function: "<<EvenOdd(4) << endl;  
cout << "Trying 7 to pass through this function: "<<EvenOdd(7) << endl;  
cout << "================= ToUppercase() ==============" << endl;  
cout << "Trying 'E' to pass through this function: "<<ToUppercase('E') << endl;  
cout << "Trying 'e' to pass through this function: "<<ToUppercase('e') << endl;  
cout << "Trying 'x' to pass through this function: "<<ToUppercase('x') << endl;  
cout << "================== Decrement() =================" << endl;  
int dNum1= -1,dNum2= 5;  
cout << "Trying dNum1= -1 and dNum2= 5 through this function: " << endl;  
Decrement(dNum1);  
Decrement(dNum2);  
cout << "Now dNum1= "<< dNum1 <<" and "<< "dNum2= " << dNum2 << " (dNum2 changed !) "<< endl;  
cout << "=========== RightAngleQuadrilateral() ===========" << endl;  
cout << "Trying length= 2.5 and width=2.5 through this function: " << RightAngleQuadrilateral(2.5 , 2.5) << endl;  
cout << "Trying length= 2.5 and width=2.25 through this function: "<< RightAngleQuadrilateral(2.5 , 2.25) << endl;  
cout << "=================== Distance() =================" << endl;  
cout << "Trying 2.5 and 2.25 through this function: "<< Distance(2.5, 2.25) << endl;  
cout << "Trying 2.5 and 2.50 through this function: "<< Distance(2.5, 2.50) << endl;  
cout << "Trying 2.5 and 2.75 through this function: "<< Distance(2.5, 2.75) << endl;  
cout << "Trying -2.5 and 2.50 through this function: "<< Distance(-2.5, 2.50) << endl;  
cout << "=================== MultipleOf() =================" << endl;  
cout << "Trying 9 and 3 through this function: "<< MultipleOf(9, 3) << endl;  
cout << "Trying 3 and 91 through this function: "<< MultipleOf(3, 91) << endl;  
cout << "Trying 0 and 2 through this function: "<< MultipleOf(0, 2) << endl;  
cout << "Trying 2 and 0 through this function: "<< MultipleOf(2, 0) << endl;  
cout << "=================== BoolToString() =================" << endl;  
cout << "Trying 0 through this function: "<< BoolToString(0) << endl;  
cout << "Trying 1 through this function: "<< BoolToString(1) << endl;  
cout << "===================== ColorCode() ===================" << endl;  
cout << "Trying 12 through this function: "<< ColorCode(12) << endl;  
cout << "Trying 9 through this function: "<< ColorCode(9) << endl;  
cout << "Trying 8 through this function: "<< ColorCode(8) << endl;  
cout << "Trying 10 through this function: "<< ColorCode(10) << endl;  
cout << "===================== LetterGrade() ===================" << endl;  
cout << "Trying 97.2 through this function: "<< LetterGrade(97.2) << endl;  
cout << "Trying 89.9 through this function: "<< LetterGrade(89.9) << endl;  
cout << "Trying 79.9 through this function: "<< LetterGrade(79.9) << endl;  
cout << "Trying 65.5 through this function: "<< LetterGrade(65.5) << endl;  
cout << "Trying 59.9 through this function: "<< LetterGrade(59.9) << endl;  
cout << "======================= Sort() ========================" << endl;  
double s1=100.5, s2=52.6, s3=30.75;  
cout <<" Value before call for s1 is "<< s1 <<" s2 is "<<s2 <<" s3 is "<< s3 << endl;  
Sort(s1, s2, s3);  
cout <<" Value after call for s1 is "<< s1 <<" s2 is "<<s2 <<" s3 is "<< s3 << endl;  
cout << "================= QuadraticSolutions() ===================" << endl;  
cout << "Trying 0,1,2 through this function: "<< QuadraticSolutions(0,1,2)<< endl;  
cout << "Trying 1,1,1 through this function: "<< QuadraticSolutions(1,1,1)<< endl;  
cout << "Trying 1,-2,1 through this function: "<< QuadraticSolutions(1,-2,1)<< endl;  
cout << "Trying 1,-7,-12 through this function: "<< QuadraticSolutions(1,-7,-12)<< endl;  
cout << "====================== DayOfTheWeek() ===================" << endl;  
cout << "Trying 1 through this function: " << DayOfTheWeek(1) << endl;  
cout << "Trying 3 through this function: " << DayOfTheWeek(3) << endl;  
cout << "Trying 6 through this function: " << DayOfTheWeek(6) << endl;  
cout << "Trying 7 through this function: " << DayOfTheWeek(7) << endl;  
cout << "=================== TemperatureConverter() =================" << endl;  
cout << "Trying -273.15, C, K through this function: " <<TemperatureConverter(-273.16,'C','K')<<endl;  
cout << "Trying 0,'K','C' through this function: " <<TemperatureConverter(0,'K','C')<<endl;  
cout << "Trying 0,'F','C' through this function: " <<TemperatureConverter(0,'F','C')<<endl;  
cout << "=========================== Median() =======================" << endl;  
cout << "Trying 77,56,98,44,5 through this function: " ; 
cout << Median(77,56,98,44,5) ; 
cout << "\n"; 
cout << "Trying 7,8,9,10,11 through this function: " ; 
cout << Median(7,8,9,10,11) ; 
cout << "\n"; 
cout << "Trying 9,8,7,10,11 through this function: " ; 
cout << Median(9,8,7,10,11 ) ; 
cout << "\n"; 
cout << "Trying 9,10,8,7,11 through this function: " ; 
cout << Median(9,10,8,7,11) ; 
cout << "\n"; 
cout << "Trying 10,11,9,8,7 through this function: " ; 
cout << Median(10,11,9,8,7 ) ; 
cout << "\n"; 
cout << "Trying 11,10, 9,8,7 through this function: " ; 
cout << Median(11,10, 9,8,7 ) ; 
cout << "\n"; 
cout << "Trying 8,7,11,10,9 through this function: " ; 
cout << Median(8,7,11,10,9) ; 
cout << "\n"; 
cout << "=========================== DateFormat() =======================" << endl;  
cout << "Trying 1,30,20 through this function: " << DateFormat(1,30,20)<< endl;  
cout << "Trying 4,25,23 through this function: " << DateFormat(4,25,23)<< endl;  
cout << "Trying 7,8,-25 through this function: " << DateFormat(7,8,-25)<< endl;  
cout << "Trying 17,3,19 through this function: " << DateFormat(17,3,19)<< endl;  
cout << "Trying 11,20,19 through this function: " << DateFormat(11,20,19)<< endl;  
cout << "=========================== AbsoluteFactorial() =======================" << endl;  
cout << "Trying 5 through this function: " <<AbsoluteFactorial(5)<< endl;  
cout << "Trying 4 through this function: " <<AbsoluteFactorial(4)<< endl;  
cout << "Trying 0 through this function: " <<AbsoluteFactorial(0)<< endl;  
cout << "Trying -4 through this function: " <<AbsoluteFactorial(-4)<< endl;  
cout << "Trying -5 through this function: " <<AbsoluteFactorial(-5)<< endl;  
return 0;  
}  


double AbsoluteValue(double x)  
{  
if (x < 0)  
    return (x*(-1));  
else  
    return x;  
}  

void SwapIfGreater(int &x,int &y)  

{  
if (x > y)  
    {  
        x = x+y;  
        y = x-y;  
        x = x-y;  
    }  

}  

double Maximum(double x,double y,double z)  
{  
if (x>=y && x>=z)  
    return x;  
else if (y>=z && y>=x)  
    return y;  
else  
    return z;  
}  



string EvenOdd(int n)  
{  
if (n%2==0)  
    return "Even";  
else  
    return "Odd";  
}  



char ToUppercase(char ch)  
{  
int n = int(ch);  
if (97<=n && n<=122)  
    n = n-32;  

ch = char(n);  
return ch;  
}  



void Decrement(int &n)  
{  
if (n>0)  
    n=(n-1);  
}  

string RightAngleQuadrilateral(double length, double width)  
{  
if (length==width)  
    return "Square";  
else  
    return "Rectangle";  
}  



double Distance(double x, double y)  
{  
if (x>=y)  
    return (x-y);  
else  
    return (y-x);  
}  




bool MultipleOf(int x, int y)  
{  
if (x==0 || y==0) //zero is a multiple of every integer  
    return true;  
else if (x%y==0 || y%x==0)  
    return true;  
else  
    return false;  
}  




string BoolToString(bool n)  
{  
if (n==0)  
    return "False";  
else  
    return "True";  
}  



string ColorCode(int n)  
{  
if ((n%4==0)&&(n%3==0))  
    return "purple";  
else if (n%3==0)  
    return "red";  
else if (n%4==0)  
    return "blue";  
else  
    return "yellow";  
}  


string LetterGrade(double grade)  
{  
if (grade>= 97)  
    return "A+";  
else if (grade>= 93)  
    return "A";  
else if (grade>= 90)  
    return "A-";  
else if (grade>= 90)  
    return "B+";  
else if (grade>= 83)  
    return "B";  
else if (grade>= 80)  
    return "B-";  
else if (grade>= 76)  
    return "C+";  
else if (grade>= 65)  
    return "C";  
else  
    return "F";  
}  



void Sort(double &a, double &b, double &c)  
{  
double x=a;  
double y=b;  
double z=c;  
if ((a<=b) && (b<=c) && (c<=a))  //a<=b<=c
    {  
    a = x;  
    b = y;  
    c = z;  
    }  
else if ((a<=b) && (c<=b) && (a<=c))  //a<=c<=b
    {  
    a = x;  
    b = z;  
    c = y;  
    }  
else if ((b<=a) && (b<=c) && (a<=c))  //b<=a<=c
    {  
    a = y;  
    b = x;  
    c = z;  
    }  
else if ((b<=c) && (b<=a) && (c<=a))  //b<=c<=a
    {  
    a = y;  
    b = z;  
    c = x;  
    }  
else if ((c<=b) && (c<=a) && (b<=a))  //c<=b<=a
    {  
    a = z;  
    b = y;  
    c = x;  
    }  
else if ((c<=a) && (c<=b) && (a<=b))  //c<=a<=b
    {  
    a = z;  
    b = x;  
    c = y;  
    }  
}  



int QuadraticSolutions(double a, double b, double c)  
{
if (a==0) //If a is 0, then the equation is not quadratic. 
    return 0;
else if (b*b < 4*a*c) //If b*b < 4*a*c, then roots are complex(not real). 
    return 0;
else if (b*b == 4*a*c) //If b*b == 4*a*c, then roots are real and both roots are the same. 
    return 1;
else if (b*b > 4*a*c) //If b*b > 4*a*c, then roots are real and different. 
    return 2;
else 
    return 0;
}  



string DayOfTheWeek(int d)  
{  
if (d==1)  
    return "Sunday";  
else if (d==2)  
    return "Monday";  
else if (d==3)  
    return "Tuesday";  
else if (d==4)  
    return "Wednesday";  
else if (d==5)  
    return "Thursday";  
else if (d==6)  
    return "Friday";  
else if (d==7)  
    return "Saturday";  
else  
    return "";  
}  


double TemperatureConverter(double Temp, char From, char To)  
{  
// F=Fahrenheit; C=Celsius; K=Kelvin;  
// The next two if functions will return temp if the To and From value is invalid  
if (!((From == 'F'||From == 'f' )||(From == 'C'||From == 'c' )||(From == 'K'||From == 'k' )))  
    return Temp;  
if (!((To == 'F'||To == 'f' )||(To == 'C'||To == 'c' )||(To == 'K'||To == 'k' )))  
    return Temp;  

if (To == 'F'||To == 'f')  
    {  
    if (From == 'C'||From == 'c') // to get F from C  
        Temp = (Temp * 9.0) / 5.0 + 32;  
    else if (From == 'K'||From == 'k') // to get F from K  
        Temp = (9.0 / 5) * (Temp - 273.15) + 32;  
    }  

if (To == 'C'||To == 'c')  
    { 
    if (From == 'F'||From == 'f') // to get C from F  
        Temp = (5*(Temp-32))/9;  
    else if (From == 'K'||From == 'k') // to get C from K  
        Temp = Temp - 273.15;  
    }  

if (To == 'K'||To == 'k')  
    {
    if (From == 'C'||From == 'c') // to get K from C  
        Temp = Temp + 273.15;  
    else if (From == 'F'||From == 'f') // to get K from F  
        Temp = (5.0 / 9) * (Temp - 32) + 273.15;  
    }  
return Temp;  
}  



int Median(int a,int b,int c,int d,int e)  

{  
//	Using bubble-sorting method to iterate and swap from 
//	left to right of the parameters with help of a swap function 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 
SwapIfGreater(a, b); 
SwapIfGreater(b, c); 
SwapIfGreater(c, d); 
SwapIfGreater(d, e); 

return c; 
}  



string DateFormat(int mn, int dy, int yr)  
{  
string full_date;
if ((mn>12)||(mn<0)||(dy>31)||(dy<0)||(yr<0))
    return "";
if (mn==1)
    full_date = "January "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==2)
    full_date = "February "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==3)
    full_date = "March "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==4)
    full_date = "April "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==5)
    full_date = "May "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==6)
    full_date = "June "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==7)
    full_date = "July "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==8)
    full_date = "August "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==9)
    full_date = "September "+ to_string(dy)+", 20"+to_string(yr);    
else if (mn==10)
    full_date = "October "+ to_string(dy)+", 20"+to_string(yr);    
else if (mn==11)    
    full_date = "November "+ to_string(dy)+", 20"+to_string(yr);
else if (mn==12)    full_date = "December "+ to_string(dy)+", 20"+to_string(yr);
return full_date;
} 


int AbsoluteFactorial(int n)  
{  
if (n<0 )
 n=(n*(-1)); 

if ((n==0)||(n==1))  
    return 1;  
else  
    return n*AbsoluteFactorial(n-1);  
}  

