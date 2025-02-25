#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp; // Declare three integer variables

    // Prompt user to enter the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Prompt user to enter the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Display numbers before swapping
    cout << "\nBefore swapping" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Swap the values of num1 and num2 using temp as a temporary storage
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display numbers after swapping
    cout << "\nAfter swapping" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0; // Return 0 to indicate successful execution
}
