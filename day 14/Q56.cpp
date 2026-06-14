#include <iostream>
using namespace std;

int main()
{
    int n;
    //  enter array size..
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    // enter array elements..
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    bool found = false;

    // Check each element with the remaining elements.
    for(int i = 0; i < n; i++)
    {
        bool isDuplicate = false;

        // Check if the element has already appeared before..
        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                isDuplicate = true;
                break;
            }
        }

        
        if(isDuplicate)
        {
            continue;
        }

        // Check for duplicates after current position
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if(!found)
    {
        cout << "No duplicate elements found.";
    }

    return 0;
}