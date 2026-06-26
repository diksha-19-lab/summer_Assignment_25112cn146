#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 5000, deposit, withdraw;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> deposit;
                balance += deposit;
                cout << "Amount deposited successfully.\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> withdraw;

                if (withdraw <= balance) {
                    balance -= withdraw;
                    cout << "Please collect your cash.\n";
                } else {
                    cout << "Insufficient balance.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}