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
      int key;
    //   input the elements to search..
     cout << "enter element to search";
     cin >> key;
     int found = 0;
    //  perform linear search..
     for(int i =0; i<n; i++)
     {
       if(arr[i] == key)
       {
        cout << "element found at position" << i+ 1;
        found = 1;
        break;
       }
     }
    //  if element is not found.
    if (found == 0)
    {
        cout << "element not found";
    } 
    return 0;
}