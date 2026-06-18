#include<iostream>
using namespace std;
int main()
{
    int arr[50],n,i,j,temp,minIndex;
    cout << "enter the no of elements";
    cin >> n;
    cout << "enter the elements";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    // selection sort..
    for(i=0;i<n-1;i++)
    {
        minIndex = i;
         for(j= i+1;j<n;j++)
         {
            if(arr[j]) < arr[minIndex])
            {
                minIndex = j;
            }
         }
        //   swapping the minimum elements with current elements..
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    cout << "sorted array";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}



