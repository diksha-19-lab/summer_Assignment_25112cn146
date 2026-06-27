#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[10];
    int n = 0, choice;

    do
    {
        cout << "\n----- Student Record Management System -----";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
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
                cout << "Enter Marks: ";
                cin >> s[n].marks;
                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!\n";
                }
                else
                {
                    cout << "\nStudent Records:\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nRoll No : " << s[i].roll;
                        cout << "\nName    : " << s[i].name;
                        cout << "\nMarks   : " << s[i].marks << endl;
                    }
                }
                break;

            case 3:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}