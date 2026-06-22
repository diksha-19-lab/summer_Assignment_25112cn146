#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  int words =1;
  cout << "enter a sentence";
  getline(cin , str);
  for(int i=0;i< str.length();i++)
  {
    if(str[i] == ' ')
    words++;
  }
  cout << "number of words = "<< words;
  return 0;
}