#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Take the number of rows from the user.
    cout << "Enter number of rows: ";
    cin >> rows;

    // Loop for each row.
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces.
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        // Print characters in increasing order.
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }

        // Print characters in decreasing order.
        for (int j = i - 2; j >= 0; j--)
        {
            cout << char('A' + j);
        }

        // Move to the next line.
        cout << endl;
    }

    return 0;


}


