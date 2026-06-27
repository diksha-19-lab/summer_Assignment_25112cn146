#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[10];
    int n = 0, choice;

    do
    {
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> e[n].id;
                cout << "Enter Employee Name: ";
                cin >> e[n].name;
                cout << "Enter Salary: ";
                cin >> e[n].salary;
                n++;
                cout << "Employee Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Employee Records Found!";
                }
                else
                {
                    cout << "\nEmployee Records:\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee ID : " << e[i].id;
                        cout << "\nName        : " << e[i].name;
                        cout << "\nSalary      : " << e[i].salary << endl;
                    }
                }
                break;

            case 3:
                cout << "\nThank You!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 3);

    return 0;
}