#include <iostream>
#include <cmath>    
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int num)
{
    int original = num;   // Store original number
    int sum = 0;
    int digit;
    int count = 0;
    int temp = num;

    // Count the number of digits
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;              // Extract last digit
        sum = sum + pow(digit, count);  // Add digit^count
        temp = temp / 10;               // Remove last digit
    }

    // Check if sum equals original number
    return (sum == original);
}

   int main()
   {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    //  calling function
    if (isArmstrong(number))
        cout << number << " is an Armstrong Number.";
    else
        cout << number << " is not an Armstrong Number.";

    return 0;
}

    