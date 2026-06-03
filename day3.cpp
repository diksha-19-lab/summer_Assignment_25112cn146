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

q2.cpp
#include<iostream>
using namespace std;
int main()
{
    int a, b, i, j;
    cin >> a >> b;
    for(i=a; i<=b; i++)
    {
        if(i <=1)
            continue;
            for(j=2; j<i;j++)
            {
                if(i%j==0)
                    break;
            }
            if(j==i)
               cout<<i<<" ";
        }
        return 0;
    }
 
q3.cpp
#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cin>> a >> b;
    while(b!=0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout << "GCD" << a;
    return 0;
}
 q4.cpp
 #include<iostream>
 using namespace std;
    int main()
    {
        int a, b, lcm;
        cout<<"enter two numbers:";
        cin>>a>>b;
        lcm=(a>b)? a : b;
        while(true)
        {
            if(lcm%a==0 && lcm%b==0)
            {
                cout<<"LCM is: "<<lcm;
                break;
            }
            lcm++;
        }
        return 0;
    }
            
        
            
        
    
