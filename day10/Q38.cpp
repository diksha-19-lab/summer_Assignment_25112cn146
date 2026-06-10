#include <iostream>
using namespace std;
int main()
{
    int rows;
    // Take the number of rows from the user.
    cout << "Enter number of rows: ";
    cin >> rows;
    // Loop for each row.
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        // Print stars in reverse pyramid form
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        // Move to the next line.
        cout << endl;
    }

    return 0;
}




    
    

        