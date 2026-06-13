#include <iostream>
using namespace std;

// Function to find the largest element
int findLargest(int arr[], int size)
{
    int largest = arr[0]; // Assume first element is largest

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to find the smallest element
int findSmallest(int arr[], int size)
{
    int smallest = arr[0]; // Assume first element is smallest

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main()
{
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call functions and display results
    cout << "Largest element = " << findLargest(arr, n) << endl;
    cout << "Smallest element = " << findSmallest(arr, n) << endl;

    return 0;
}