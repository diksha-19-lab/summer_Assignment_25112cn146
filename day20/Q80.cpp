#include<iostream>
using namespace std;
int main()
{
    int rows , cols;
    cout << "enter number of rows and columns";
    cin >> rows >> cols;
    int a[10][10];
    cout << "enter matrix elements";
     for(int i=0;i<rows; i++)
     {
        for (int j=0; j<cols; j++)
        {
            cin >> a[i][j];
        }
     }
     cout << "column-wise sum\n";
     for(int j=0; j< cols; j++)
     {
        int sum =0;
        for(int i=0;i< rows; i++)
        {
            sum += a[i][j];
        }
        cout << "sum of coloumn" << j+ 1 << "=" << sum << endl;
     }
     return 0;
}