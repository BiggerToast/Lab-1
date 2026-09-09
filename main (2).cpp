/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include<iomanip>
#include <string>

int main()
{
    string Name;
    int multi;
    

    cout<<"Enter employee's name:";
    getline(cin,Name);
    
    cout<< endl;
    
    cout << "enter the number 1";
    cin >> multi;
    cout << setw(2) << "Enter Item #1" << setw(4) << " apple" << endl <<
     setw(2) << "Enter price:" << setw(3) << multi * 1.50 << endl <<
     setw(2) << "Enter Item #2" << setw(4) << " Bread " <<  endl <<
     setw(2) << "Enter price:" << setw(3) << multi * 2.25 << endl <<
     setw(2) << "Enter Item #3" << setw(4) << " frozen Meal"  << endl <<
     setw(2) << "Enter price:" <<  setw(3) << multi * 3.00 << endl <<
     setw(2) << "Enter Item #4" << setw(4) << " Choclate" << endl <<
     setw(2) << "Enter price:" << setw(3) << multi * 4.50 << endl <<
     setw(2) << "Enter Item #5" << setw(4) << "-" << endl <<
     setw(2) << "Enter price:" << setw(3) << multi * 0 << endl;
     
     cout << endl;
     cout << endl;
     
     cout << setw(5) << "THANKS FOR SHOPPING AT" << endl <<
     setw(3) << "MY STORE" << endl;
     
     cout << "Associate:" <<Name;
     cout << endl;
     cout << "Store# 5" << endl;
     cout << "edingburg, TX 78359" << endl;
     cout << endl;
     
     cout << setw(3) << "Apple" << setw(15) << "$" << 1.50 << endl <<
     setw(3) << "Bread" << setw(15) << "$" << 2.25 << endl <<
     setw(3) << "Frozen Meal" << setw(15) << "$" << 3.00 << endl <<
     setw(3) << "choclate" << setw(15) << "$" << 4.50 << endl <<
     setw(1) << "-" << setw(15) << "$" << 0.00 << endl;
     
    cout << endl;
    
    cout << "subtotal"<< setw(10) << "$" << "11.25" <<endl;
    cout << "tax" << setw(10) << "$" << "1.60" << endl;
    cout << "total" <<setw(10) << "$" << "12.94" << endl;
    cout << endl;
    cout << "*** customer Copy ***";
    
     
    return 0;
}