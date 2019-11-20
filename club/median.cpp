#include<iostream>
#include<iomanip>
using namespace std;



bool round(int &x, int &y)
{
if (y>x)
     {
        x=x+y;
        y=x-y;
        x=x-y;
        return 1;
     }
else {
        return 0;
     }
}

int medianOfFive(int a,int b,int c,int d,int e)
{
round (a,b);
round (a,c);
round (a,d);
round (a,e);

round (b,c);
round (b,d);
round (b,e);

round(c, d);
round(c, e);

round(d, e);

return c;
}

int medianOfFive2(int a,int b,int c,int d,int e)
{
round (a,b);
round (b,c);
round (c,d);
round (d,e);

round (a,b);
round (b,c);
round (c,d);
round (d,e);

round (a,b);
round (b,c);
round (c,d);
round (d,e);

round (a,b);
round (b,c);
round (c,d);
round (d,e);

round (a,b);
round (b,c);
round (c,d);
round (d,e);

return c;
}

int main()
{
cout << medianOfFive2(1,2,3,4,5) << "\n";
cout << medianOfFive2(2,3,4,5,1) << "\n";
cout << medianOfFive2(3,4,5,1,2) << "\n";
cout << medianOfFive2(3,4,5,1,2) << "\n";
cout << medianOfFive2(3,1,5,4,2) << "\n";
cout << medianOfFive2(3,1,1,1,2) << "\n";
cout << medianOfFive2(3,1,2,1,2) << "\n";
return 0;
}