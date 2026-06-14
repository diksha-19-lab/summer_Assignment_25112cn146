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
    //   storing last element.
    int last = arr[n-1];
     for( int i= n-1 ; i> 0; i--)
     {
        arr[i] = arr[i - 1];
     }
     arr[0] = last;
    //  display rotated array..
     cout << "array after right rotation";
     for(int i =0; i<n; i++)
     {
        cout << arr[i] << " ";
     }
     return 0; 
}