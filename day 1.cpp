q1.cpp
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;  i<=n; i++)
    {
        sum+=i;
        
    }
    cout<<"sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;

}

q2.cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for (int i=1; i<=10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}

q3.cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long factorial=1;
    cout<<"enter a number:";
    cin>> n;
    for(int i = 1; i<=n; i++)
    {
        factorial *= i;
        
    }
    cout<<"factorial of "<<n<<" is: "<<factorial;
    return 0;
}

q4.cpp
#include<iostream>
using namespace std;
int main()
{
    int num,count = 0;
    cout<<"enter a number: ";
    cin >> num;
    while ( num!= 0) {
        num = num / 10;
        count++;
    }
    cout<<"Number of digits = " << count;
    return 0;
    }
