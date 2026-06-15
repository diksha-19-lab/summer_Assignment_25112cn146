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
      int index = 0;

    // move all non zero elements to the front.
     for(int i=0; i<n;  i++)
     {
       if (arr[i] != 0)
       {
        arr[index] = arr[i];
        index ++;
       }
     }

    //  fill all remaining positions with zero.
    while(index < n)
    {
        arr[index] = 0;
        index++;
    }

    // now display the updated array.
    cout << "array after moving zeroes to the end ";
    for(int i= 0;i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}