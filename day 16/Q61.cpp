#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter value of n";
    cin >> n;
    int arr[n -1];
     cout << "enter " << n-1 << "elements";
     for(int i=0; i<n-1; i++)
     {
        cin >> arr[i];
     }
      int totalsum = n*(n + 1)/2;
      int arraysum = 0;
     for( int i= 0; i<n-1; i++)
     {
        arraysum += arr[i];
     }
      int missingnumber = totalsum-arraysum;
      cout << "misiing number= " <<missingnumber << endl;
      return 0;
}