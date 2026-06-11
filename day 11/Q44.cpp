#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;

    // Multiply numbers from 1 to n
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    //  displaying result
    return fact;
}

int main()
{
    int num;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Calling function
    cout << "Factorial = " << factorial(num);
    return 0;
}