#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "enter a string";
    getline(cin,str);
    for(int i=0; i<str.length();i++)
    {
        for(int j= i+1;j<str.length();j++)
        {
            if(str[i] == str[j])
            {
                cout << "first repeating character"; << str[i];
                return 0;
            }
        }
    }
    cout << "No repeating charcter found";
    return 0;
}