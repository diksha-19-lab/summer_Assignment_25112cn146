#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second no";
    cin>> num2;
    // calling sum function.
    int result=sum(num1,num2);
    cout<<"sum =" << result;
    return 0;
}