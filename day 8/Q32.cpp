#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input the number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    // Loop for each row
    for(int i = 1; i <= n; i++)
    {
        // Print the row number i, i times
        for(int j = 1; j <= i; j++)
        {
            cout << i;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}