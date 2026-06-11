#include<iostream>
using namespace std;
// function to find maximum 
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int num1,num2;
    cout<<"enter first no";
    cin >> num1;
    
    cout<<'enter second no";
    cin >> num2;

    // calling function
    int max = maximum(num1,num2);
    cout<<"maximum number=" <<max;
    return 0;
}
