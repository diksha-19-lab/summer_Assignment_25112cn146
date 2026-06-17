#include <iostream>
using namespace std;
int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i;
    cout << "enter the size of first array";
    cin >> n1;
    cout << " enter the elements of first array";
    for (i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "enter the size of second array";
    cin >> n2;
    cout << "enter the elements of second array";
    for (i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    //  merge first array into third array..
    for (i = 0; i < n1; i ++)
    {
        c[i] = a[i];
    }
    //   merge second array into third array..
    for (i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    cout << "merged array";
    for (i = 0; i < n1 + n2; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
