#include<iostream>
using namespace std;
int main()
{
    int num, reverse=0,digit;
    cout<<"enter a number:";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        reverse= reverse*10 + digit;
        num= num/10;
    }
    cout<<"The reverse of the number is: "<<reverse<<endl;
    return 0;
}