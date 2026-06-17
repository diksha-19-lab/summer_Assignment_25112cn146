#include<iostream>
using  namespace std;
int main()
{
    int a[50], b[50];
    int n1,n2;
    cout << "enter the size of first array";
    cin >> n1;
    cout << "enter the elements of first array";
     for(int i=0;i<n1; i++)
     {
        cin >> a[i];
     }

     cout << "enter the size of second array";
     cin >> n2;
     cout << "enter the elements of second array";
      for(int i=0; i<n2; i++)
      {
        cin >> b[i];
      }
      cout << "intersection of arrays";
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(a[i] == b[j])
                {
                    cout << a[i] << " ";
                    break;
                }
            }
        }
        return 0;
    }
     