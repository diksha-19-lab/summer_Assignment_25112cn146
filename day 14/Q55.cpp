#include<iostream>
#include<climits>
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
      int largest = INT_MIN;
      int secondlargest = INT_MIN;
    //   for finding second largest elements..
     for(int i =0; i<n; i++)
     {
       if(arr[i] > largest)
       {
         secondlargest = largest;
         largest = arr[i];
       }
     else if(arr[i] > secondlargest && arr[i] != largest)
     {
        secondlargest = arr[i];
     }
}
//  display result..
 if(secondlargest = INT_MIN)
 cout << "second largest element does not exist";
 else
 cout << "second largest element = " << secondlargest;
 return 0;
}