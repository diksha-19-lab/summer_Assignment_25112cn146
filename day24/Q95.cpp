#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
   string sentence, word,longestword;
   cout << "enter a sentence";
   getline(cin , sentence);
   stringstream ss(sentence);
   while(ss >> word)
   {
    if(word.length() > longestword.length())
    {
        longestword = word;
    }
   }
   cout << "longest word" << longestword << endl;
   cout << "length" << longestword.length();
   return 0;
}