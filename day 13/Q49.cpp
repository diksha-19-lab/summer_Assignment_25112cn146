#include <iostream>
using namespace std;
int main()
{
    // Array declaration.
    int arr[10];
    int n;
    // input for size of array.
    cout << "enter number of elemnts";
    cin >> n;
    // input array elements.
    cout << "enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for display array elements.
    cout << "array elements are";
    for (int i = 0; i < n;, i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
