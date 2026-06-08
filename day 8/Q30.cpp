#include <iostream>
using namespace std;

int main()
{
    int n;

    // Take the number of rows as input.
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer   loop for rows.
    for(int i = 1; i <= n; i++)
    {
        // Inner loop to print numbers from 1 to i.
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}