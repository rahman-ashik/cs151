 /*-----------------------------------------------+
| +---------------------------------------------+ |
| |         Name: Md Ashikur Rahman             | |
| |         Last Update Date: 10/30/19          | |
| |          Rev: 0.1.3                         | |
| +---------------------------------------------+ |
+-----------------------------------------------*/         
#include <iostream>
using namespace std;

void showRules()
{
cout << endl;
cout << endl;
cout << endl;
cout << " \t\t\t>>>>>>>>>>>>>>>>>> WELCOME <<<<<<<<<<<<<<<<<<" << endl;
cout << " \t\t\tThis paragraph will explain the rules -------- " << endl;
cout << " \t\t\t--------------------------------------------- " << endl;
cout << " \t\t\t--------------------------------------------- " << endl;
cout << " \t\t\t--------------------------paragraph ends here " << endl;
cout << " \t\t\t>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
}

int main(void)
{
// This is the array that shows up on the screen as a board 
char myArray[4][4] = { {' ',' ',' ',' '}, {' ',' ',' ',' '},{' ',' ',' ',' '}, {' ',' ',' ',' '} };
// int width = 4, height = 4;

showRules();

//====================  This is the board   =====================//
cout << " _ _ _ _ _ _ _ _ "<< endl;   
cout << " _ _ _ _ _ _ _ _ "<< endl;
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << "|_" <<myArray[i][j] << "_";
            
        }
        cout << "|"<< endl;
    }
//=============================================================//

int place_holder; // this will take a column number from the user to respond
cout << "\n| Which column ? |"<< endl; 
cin >> place_holder;
 
 //     Validating if the user is giving a right input 
  if (!(place_holder == 1 || place_holder ==  2 || place_holder == 3 || place_holder == 4))
    {cout << "Invalid input !!! Try again.  Which column ? " << endl;
    cin >> place_holder;  } 

// Now that the place_holder has a value, we convert that value into a char(X) 
  if (place_holder == 1)
    myArray[3][0] = 'X';
  else if (place_holder == 2)
    myArray[3][1] = 'X';
  else if (place_holder == 3)
    myArray[3][2] = 'X';
  else if (place_holder == 4)
    myArray[3][3] = 'X';

//===== This shows the board again, but with modified array =====================//
   cout << " _ _ _ _ _ _ _ _ "<< endl;   
   cout << " _ _ _ _ _ _ _ _ "<< endl;
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << "|_" <<myArray[i][j] << "_";
            
        }
        cout << "|"<< endl;
    }

// Asking for a input ,, valid inputs are  : 1, 2, 3, 4 only
cout << "\n| Which column ? |"<< endl; 
cin >> place_holder;
 
 //     Validating if the user is giving a right input 
 // This time eliminating the previous choice of a raw
  if (!(place_holder == 1 || place_holder ==  2 || place_holder == 3 || place_holder == 4))
    {cout << "Invalid input !!! Try again.  Which column ? " << endl;
    cin >> place_holder;  } 

// Now that the place_holder has a value, we convert that value into a char(X) 
        if ((place_holder == 1) && (myArray[3][0] != 'X'))
          myArray[3][0] = 'O'; // if player chooses column 1 and that column has its last row empty 
        else if ((place_holder == 1) && (myArray[3][0] == 'X'))
          myArray[2][0] = 'O'; // if player chooses column 1 and that column has its last row filled up, X goes to the row above(in the smae column)
        else if ((place_holder == 2) && (myArray[3][1] != 'X'))
          myArray[3][1] = 'O';
        else if ((place_holder == 2) && (myArray[3][1] == 'X'))
          myArray[2][1] = 'O';
        else if ((place_holder == 3) && (myArray[3][2] != 'X'))
          myArray[3][2] = 'O';
        else if ((place_holder == 3) && (myArray[3][2] == 'X'))
          myArray[2][2] = 'O';
        else if ((place_holder == 4) && (myArray[3][3] != 'X'))
          myArray[3][3] = 'O';
        else if ((place_holder == 4) && (myArray[3][3] == 'X'))
          myArray[2][3] = 'O';

//===== This shows the board again, but with modified array =====================//
   cout << " _ _ _ _ _ _ _ _ "<< endl;   
   cout << " _ _ _ _ _ _ _ _ "<< endl;
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << "|_" <<myArray[i][j] << "_";
            
        }
        cout << "|"<< endl;
    }

}



