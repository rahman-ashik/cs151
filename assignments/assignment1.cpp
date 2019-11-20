/*
Name: Md Ashikur Rahman
Date: 09/19/2019
Assignment: assignment1  
*/

//include extra library, this is a pre-processor directive
#include<iostream>  // library for handling input - output streams 
#include<iomanip>   // library for manipulating input - output 

using namespace std;  

//Every C++ program MUST have at least one function named main()
// Creating a function // 
int main() 
{   // this line is the header
            string firstName; //declaring all necessary variables
            string lastName;
            int age;
            int feetOfHeight;
            int inchesOfHeight;
            int weight;

           
            cout << setprecision(2) << fixed; // manipulating outputs for two decimal point 

            cout << "Enter your first name: "; // asking user the first name
            cin >> firstName ; 
     
            cout << "Enter your last name: "; // asking user the last name
            cin >> lastName ; 
           
            cout << "Enter your age:"; // asking user the age
            cin >> age ; 
            
            cout << "Enter your height in feet and inches seperated by a space:"; // asking user the height
            cin >> feetOfHeight >> inchesOfHeight ; 

            cout << "Enter your weight in pounds:"; // asking user the weight
            cin >> weight ; 
            cout <<"\n"<<"\n";

            //Declaring necessary varibales for calculation
            int upperBirthYear= (2019 - age);
            int lowerBirthYear= (upperBirthYear-1);
            int heightInInches= ((feetOfHeight*12) + inchesOfHeight);
            double heightInCm= (heightInInches*2.54);
            double weightInN= (weight*4.45);
            double BMI = (weight*703.0)/(heightInInches*heightInInches);
            double ratio = (heightInInches*heightInInches)/703.0;
            double lowerNormal = ratio * 18.5;
            double upperNormal = ratio * 24.9;
            double lowerOverweight = ratio * 25;
            double upperOverweight = ratio * 29.9;
            double lowerObese = ratio * 30;
            double upperObese = ratio * 39.9; //calculation done

            // Showing user the results of the calculation
            cout << setfill('=') << setw(80) << "\n";
            cout << "||  " << "Candidate: " << lastName << ", " << firstName << endl;
            cout << "||  " << "Birth Year Range: " << lowerBirthYear << " - " << upperBirthYear << endl;
            cout << "||  " << "Height: " << heightInInches << "in (" << heightInCm << "cm )" << endl ;
            cout << "||  " << "Weight: " << weight << " lb (" << weightInN << "N)" << endl;
            cout << "||  " << "BMI: " << BMI << endl;
            cout << "||  " << "For height " << heightInInches << "in, the weight ranges are:" << endl;
            cout << "||     " << "Normal Weight Range: " <<lowerNormal<< " lb - "<<upperNormal<< " lb" << endl ;
            cout << "||     " << "OverWeight Range: " <<lowerOverweight<< " lb - "<<upperOverweight<< " lb" << endl;
            cout << "||     " << "Obese Weight Range: " <<lowerObese<< " lb - "<<upperObese<< " lb" << endl;
            cout << "||     " << "Extreme Weight Range: less than " << lowerNormal<<" lb or greater than " <<upperObese<<" lb"<< endl;
            cout << setfill('=') << setw(80) << "\n";
    }   // this line ends the body