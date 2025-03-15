#include<iostream>
using namespace std;

int main()
{
    double num;

    cout << "Enter measurement in inches: ";
    cin >> num;

    if (num < 0)
        cerr << "The given measurement must be nonnegative." << endl;
    //1 inch = 2.54 centimeters
    else
        cout << "Measurement in centimetre = " << num * 2.54;
}
