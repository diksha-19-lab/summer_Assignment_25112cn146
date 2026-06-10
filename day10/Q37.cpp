#include <iostream>
using namespace std;
int main()
{
    int rows;
     // Take the number of rows from the user.
    cout << "Enter number of rows: ";
    cin >> rows;
    // Loop for each row.,
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces before stars.
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
         // Print stars in pyramid form
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}


   

    

       