#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int num)
{
    int original = num;   
    int reverse = 0;
    int digit;

     // Reverse the number
    while (num > 0)
    {
        digit = num % 10;           // Get last digit
        reverse = reverse * 10 + digit;
        num = num / 10;             // Remove last digit
    }

      
    if (original == reverse)
        return true;
    else
        return false;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;
    //  calling function
    if (isPalindrome(number))
        cout << number << " is a Palindrome Number.";
    else
        cout << number << " is not a Palindrome Number.";

    return 0;
}



    