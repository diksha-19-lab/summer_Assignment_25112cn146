#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array";
    cin >> n;
    int arr[n];
    cout << "enter array elements";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int maxfreq = 0,maxElement;
    for(int i =0;i<n; i++)
    {
        int count = 1;

        for(int j = i+1; j<n; j++)
        {
             if(arr[i] == arr[j])
             {
                count++;
             }
        }
        if(count > maxfreq)
        {
            maxfreq = count;
            maxElement = arr[i];
        }
    }
     cout << "element with maximum frequency =" << maxElement << endl;
     cout << "frequency = " << maxfreq << endl;
     return 0;
}