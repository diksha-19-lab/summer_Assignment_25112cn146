#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of square.
    cout << "Enter size of square: ";
    cin >> n;

    // Outer loop for rows.
    for (int i = 1; i <= n; i++) {

        // Inner loop for columns
        for (int j = 1; j <= n; j++) {

            // Print star on borders.
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}