q1.cpp
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

q2.cpp
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

q3.cpp
#include<iostream>
using namespace std;
int main()
{
    int num,digit,product=1;
    cout<<"enter a number:";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        product= product*digit;
        num= num/10;
    }
    cout<<"The product of digits is: "<<product<<endl;
    return 0;
}

q4.cpp
#include<iostream>
using namespace std;
int main()
{
    int num,original,reverse=0,digit;
    cout<<"enter a number:";
    cin>>num;
    original=num;
    while(num>0)
    {
        digit=num%10;
        reverse= reverse*10 + digit;
        num= num/10;
    }
    if(original==reverse)
    {
        cout<<"The number is a palindrome."<<endl;
    }
    else
    {
        cout<<"The number is not a palindrome."<<endl;
    }
    return 0;
}