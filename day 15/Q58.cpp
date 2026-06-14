#include<iostream>
using namespace std;
int main()
{
    int n;
    // enter size of array.
    cout << " enter no of elements";
    cin >> n;
      
    int arr[n];
    // enter array elements..
    cout << "enter array elements";
     for( int i=0; i<n ; i++)
     {
        cin >> arr[i];
     }
    //   storing first element.
    int first = arr[0];
     for( int i=0; i<n-1; i++)
     {
        arr[i] = arr[i + 1];
     }
     arr[n-1] = first;
    //  display rotated array..
     cout << "array after left rotation";
     for(int i=0; i<n; i++)
     {
        cout << arr[i] << " ";
     }
     return 0; 
}