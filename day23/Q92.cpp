#include <iostream>
using namespace std;

int main()
{
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        freq[(int)str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < str.length(); i++)
    {
        if (freq[(int)str[i]] > maxFreq)
        {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}