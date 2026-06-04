#include<iostream>
using namespace std;
int main()
{
    int n,temp,sum=0;
    cin >> n;
    temp = n;
    while( temp > 0)
    {
        int d = temp % 10;
        sum = sum + (d*d*d);
        temp /= 10;
    }
    if (sum == n)
    cout << " Armstrong number";
    else
    cout << "Not an Armstrong number";
    return 0;
}
    
