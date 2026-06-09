#include <iostream>
using namespace std;

int main() 
{

    int n;

    // Input number of rows.
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = n; i >= 1; i--) {

        // Inner loop for printing numbers.
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}