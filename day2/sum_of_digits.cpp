#include<iostream>
using namespace std;
int main()
{
    int num,sum=0, digit;
    cout<<" enter a number:";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        sum= sum + digit;
        num= num/10;
    }
    cout<<"The sum of digits is: "<<sum<<endl;
    return 0;
}