#include<iostream>  
using namespace std;  

void StudentCheck(char, char);

int main ()
{
    char employed, recentGrad;
    cout << " Are you employed ?  Answer Y or N \n" ;
    cin >> employed ;
    cout << " Are you a recent graduate ?  Answer Y or N \n" ;
    cin >> recentGrad ;
    StudentCheck(employed, recentGrad);
    return 0;
}


void StudentCheck(char employed, char recentGrad)
{
 if(employed=='Y')
    {
        if (recentGrad=='Y')
        {
            cout << "Wheee ! You Qualify !!! \n";
        }
        else 
            cout << "Sorry ! :(  We need recent recent grads with employment :D  \n";
    }
 else 
    cout << "Ow snap, You are not employed ?? You don't qualify for this one ! \n";
}