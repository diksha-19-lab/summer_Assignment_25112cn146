#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the order of matrix";
    cin >> n;
    int a[10][10];
    cout << "enter matrix elements";
      for(int i=0;i< n; i++)
      {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
      }
      cout << "diagonal elements are\n";
       for(int i=;i<n;i++)
       {
        cout << a[i][i] << " ";
           }
           return 0;
}

