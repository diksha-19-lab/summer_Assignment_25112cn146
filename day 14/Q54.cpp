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
    //   enter the element whose frequency is to be found..
     cout << "enter element to find frequency";
     cin >> key;
     int count = 0;
     for(int i =0; i<n; i++)
     {
       if(arr[i] == key)
       {
        count++;
       }
     }
    //   display frequency..
    cout << "frequency of " << key << " = " << count;
    return 0;
}