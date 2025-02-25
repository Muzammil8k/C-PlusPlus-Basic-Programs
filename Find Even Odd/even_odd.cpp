#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

	// If the number % 2 returns 0, then number is even else if number % 2 returns 1, then number is odd
    if (num % 2 == 0)
        cout << num << " is even";
    else
        cout << num << " is odd."; 

    return 0;
}
