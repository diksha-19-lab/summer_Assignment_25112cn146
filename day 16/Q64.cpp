#include <iostream>
using namespace std;
int main()
{
    int n;
    //   input size of array..
    cout << "enter array size";
    cin >> n;
    int arr[n];
    //    input elements of array..
    cout << " enter the elements of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //    remove duplicates..
    for (int i = 0; i < n; i++)
    {
        for (int j=i+1 ; j<n; j++)
        {
            if(arr[i]== arr[j])
            {
                // shift the elements to right..
                for(int k = j; k<n-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                // reduce array size..
                n--;
            }
            else{
                j++;
            }
        }
    }
    cout << " arrray after removing duplicates";
      for(int i=0;i<n; i++)
      {
        cout << arr[i] << " ";
      }
      return 0;
}