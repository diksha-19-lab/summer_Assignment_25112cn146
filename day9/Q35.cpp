#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of rows..
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows.
    for (int i = 1; i <= n; i++) {

        // Character to print in current row.
        char ch = 'A' + i - 1;

        // Inner loop to print the character repeatedly.
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }

        cout << endl;
    }


    return 0;
}