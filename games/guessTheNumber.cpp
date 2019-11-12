//There will be three tries in this guessing game. User would be given a hint(higher/lower) each time an input is not correct
//no validation for inputs yet
//the correct guess still gives an unwanted hint before it shows the winning phase
//Also the last incorrect guess still gives an unwanted hint before it shows the losing phase

#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function which will be used to seed into srand
using namespace std;

//==================================================> Will be Improvised with functions <============================================
int main()
{
// Constants
const int MIN_VALUE = 1; // Minimum die value
const int MAX_VALUE = 10; // Maximum die value


// Variables
int Guess; // To hold the value of die #1
int Secret; // To hold the value of die #2

// Get the system time.
unsigned seed = time(0);

// Seed the random number generator.
srand(seed);
cout << "Generating magic number...\n";
Secret = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;


int n = 0;
int leftTries = 3;

        while(Guess!=Secret)
                {  
                cout << "\nGuess a the number between 1 and 10 ? You have " << leftTries << " attempts left\n" ;
                cin >>Guess;

                if (Guess < Secret)
                    cout << "\nNumber is Higher than that...\n";
                else 
                    cout << "\nNumber is Lower than that...\n";
                
                n = n+1;
                leftTries = leftTries - 1;
                if (n == 3)
                    break;
                }

if (Guess==Secret)
    cout << "Correct!!! it took you " << n << " tries. \n";
else 
    cout << "Out of tries !!! The number was " <<  Secret << " \n";




return 0;
}