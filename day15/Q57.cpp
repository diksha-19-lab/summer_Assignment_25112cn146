#include<iostream>
using namespace std;
int main()
{
    int n;
    // enter array size..
    cout << "enter number of elements";
    cin >> n;
    int arr[n];
    // enter array elements..
    cout <<"enter array elements";
    for(int i=0; i< n; i++)
    {
        cin >> arr[i];
    }
    // now reverse array by swapping..
     for(int i=0; i<n/2 ; i++)
     {
        int temp = arr[i];
        arr[i] = arr[n - 1- i];
        arr[n - 1 - i] = temp;
     }

    //  display reversed array..
    cout <<"reversed array";
    for(int i = 0;i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}