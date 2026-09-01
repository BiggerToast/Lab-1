/////////////////////////////////////////////////////////////////////
//
// Name: Enter your name
// Date: Enter the date of submission
// Class: 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Reyes
//
// Program Description: Enter a brief description of what the program does
//
////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main()
{
    double Celcius;

    double Fahenheit;
    
    cout << "Enter Tempeture Celcius" << endl;
    cin >> Celcius;
    
    Fahenheit = (9.0/5.0) * Celcius + 32;
    
    cout << Celcius << " is equal to:" << Fahenheit << " Fahenheit";

    return 0;
}