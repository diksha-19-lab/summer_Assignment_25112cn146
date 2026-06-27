#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basicSalary, hra, da, totalSalary;
};

int main()
{
    Employee e[10];
    int n = 0, choice;

    do
    {
        cout << "\n===== Salary Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Salary Details";
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

                cout << "Enter Basic Salary: ";
                cin >> e[n].basicSalary;

                e[n].hra = 0.20 * e[n].basicSalary;   // 20% HRA
                e[n].da = 0.10 * e[n].basicSalary;    // 10% DA
                e[n].totalSalary = e[n].basicSalary + e[n].hra + e[n].da;

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!";
                }
                else
                {
                    cout << "\nEmployee Salary Details\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee ID : " << e[i].id;
                        cout << "\nName        : " << e[i].name;
                        cout << "\nBasic Salary: " << e[i].basicSalary;
                        cout << "\nHRA         : " << e[i].hra;
                        cout << "\nDA          : " << e[i].da;
                        cout << "\nTotal Salary: " << e[i].totalSalary << endl;
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