#include <iostream>
using namespace std;

// Function to check Perfect Number
bool isPerfect(int num)
{
    int sum = 0;

    // Find all proper divisors and add them..
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)   // Check if i is a divisor.
        {
            sum = sum + i;  // Add divisor to sum.
        }
    }

    // If sum of divisors equals the number, then it is a perfect no..
    return (sum == num);
}

      int main()
      {
        int number;
        cout << "enter a number"
        cin >> number;

    //   funtion calling
      if (isPerfect(number))
        cout << number << " is a Perfect Number.";
    else
        cout << number << " is not a Perfect Number.";

    return 0;
}

    