#include <iostream>
using namespace std;

int main()
{
    int n;

    // Take the number of rows as input
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows.
    for(int i = 1; i <= n; i++)
    {
        // Inner loopto  print characters from A onwards
        for(int j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}