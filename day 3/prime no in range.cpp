#include <iostream>
using namespace std;

int main() {
    int start, end, i, j;

    cin >> start >> end;

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }

        if (j == i)
            cout << i << " ";
    }

    return 0;
}