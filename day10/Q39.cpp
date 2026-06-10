#include <iostream>
using namespace std;
int main()
{
    int rows;
     // Take the number of rows .
    cout << "Enter number of rows: ";
    cin >> rows;
    / Loop for each row
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces before numbers.
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        // Print numbers in the current row.
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }

        // Move to the next line.
        cout << endl;
    }

    return 0;
}




   
    
        