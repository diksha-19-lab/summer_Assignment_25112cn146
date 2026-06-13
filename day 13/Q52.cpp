#include <iostream>
using namespace std;

// Function to count even and odd numbers in an array..
void countEvenOdd(int arr[], int size)
{
    int evenCount = 0, oddCount = 0;

    // Traverse the array..
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // for increment even count.
            evenCount++; 
        }
        else
        {
            // for increment odd count.
            oddCount++; 
        }
    }

    // Display the result
    cout << "Number of Even Elements = " << evenCount << endl;
    cout << "Number of Odd Elements = " << oddCount << endl;
}

int main()
{
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // calling function..
    countEvenOdd(arr, n);

    return 0;
}