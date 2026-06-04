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
            