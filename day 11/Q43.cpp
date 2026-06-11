#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    // Numbers less than 2 are not prime
    if (n < 2)
        return false;

    // Check for factors from 2 to n-1
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false; // Number is not prime
    }

    return true; // Number is prime
}

int main()
{
    int num;
     cout << "Enter a number: ";
     cin >> num;

    // Calling function
    if (isPrime(num))
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}