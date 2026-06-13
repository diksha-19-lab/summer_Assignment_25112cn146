#include<iostream>
using namespace std;
int main()
{
    int arr[100],n;
    int sum=0;
    float average;
    // input the size of array.
    cout << "enter the number of elements";
    cin >> n;
     
    // input array elements.
    cout << "enter " << n << " elements" << endl;
    for(int i=0; i< n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // calculate average of elements.
    average = (float)sum / n;
    // displaying result.
    cout << "sum=" << sum << endl;
    cout << " Average = "<< average << endl;
    return 0;
}