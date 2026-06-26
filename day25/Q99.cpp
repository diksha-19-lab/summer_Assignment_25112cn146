#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of names: ";
    cin >> n;

    string names[n], temp;

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sorting names alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (names[i] > names[j]) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "\nNames in Alphabetical Order:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}