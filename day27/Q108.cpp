#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float m1, m2, m3, total, percentage;
};

int main()
{
    Student s[10];
    int n = 0, choice;

    do
    {
        cout << "\n===== Marksheet Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Marksheet";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Roll No: ";
                cin >> s[n].roll;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks of Subject 1: ";
                cin >> s[n].m1;

                cout << "Enter Marks of Subject 2: ";
                cin >> s[n].m2;

                cout << "Enter Marks of Subject 3: ";
                cin >> s[n].m3;

                s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
                s[n].percentage = s[n].total / 3;

                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!";
                }
                else
                {
                    cout << "\n===== Student Marksheet =====\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nRoll No    : " << s[i].roll;
                        cout << "\nName       : " << s[i].name;
                        cout << "\nSubject 1  : " << s[i].m1;
                        cout << "\nSubject 2  : " << s[i].m2;
                        cout << "\nSubject 3  : " << s[i].m3;
                        cout << "\nTotal      : " << s[i].total;
                        cout << "\nPercentage : " << s[i].percentage << "%" << endl;
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