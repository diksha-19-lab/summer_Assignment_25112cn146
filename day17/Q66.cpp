#include<iostream>
#include<set>
using namespace std;
int main()
{
    int a[50],b[50];
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
       set<int> s;
       
       for(int i=0;i< n1; i++)
       {
        s.insert(a[i]);
       }

       for(int i=0;i<n2;i++)
       {
        s.insert(b[i]);
       }

       cout << "union of arrys";
        for(int x : s)
        {
            cout << x <<" ";
        }
        return 0;
    }