#include <iostream>
using namespace std;

int main() {
    int n, product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0) {
        int digit = n % 10;     // extract last digit
        product = product * digit;
        n = n / 10;            // remove last digit
    }

    cout << "Product of digits = " << product;

    return 0;
}