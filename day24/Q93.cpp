#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str1,str2;
   cout << "enter first string";
   cin >> str1;
   cout << "enter second string";
   cin >> str2;

   if(str1.length() != str2.length())
   {
    cout << "not a rotation";
   }
   else{
    string temp= str1+str1;
    if(temp.find(str2) != string::npos)
    cout << "string is a rotation";
    else{
        cout << "string is not rotation";
    }
    return 0;  
}
}