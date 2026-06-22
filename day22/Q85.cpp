#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str;
   cout << "enter a string";
   cin >> str;
   string rev="";
   for(int i=str.length()-1;i>=0;i--)
   {
    rev+=str[i];
   }
   if(str ==rev)
   cout << "palindrome string";
   else
   cout << "not a palindrome string";
   return 0;
}