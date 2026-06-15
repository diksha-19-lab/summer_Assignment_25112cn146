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
    //  store last elements..
    int last = arr[n - 1];

     for(int i= n-1 ; i > 0; i--)
     {
        arr[i] = arr[i-1];
     }
    //  place last element at the first position..
     arr[0] = last;
    //  display rotated array.
    cout <<"array after right rotation";
    for(int i = 0;i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}