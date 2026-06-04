#include <iostream>
using namespace std;
int main()
{
    int n,i;
    bool prime=true;
    cout<<"enter a number:";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=false;
            break;
        }
    }
    if(prime)
        cout<<"prime";
    else
        cout<<"not prime";
}