#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, i, j, temp;
    cout << "enter the number of elements";
    cin >> n;
    cout << "enter the elements";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting in descending order..
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "array in descending order";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}