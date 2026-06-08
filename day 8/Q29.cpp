#include <iostream>
using namespace std;

int main()
{
    int n;

    // Take number of rows as input
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++)
    {
        // Inner loop for printing stars
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}