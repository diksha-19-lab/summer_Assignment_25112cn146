#include <iostream>
using namespace std;

// Function to print Fibonacci series.
void fibonacci(int n)
{
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        //  for Calculate next term
        next = first + second;

        // Update values for next iteration
        first = second;
        second = next;
    }
}

     int main()
     {
        int terms;
        cout << "Enter the number of terms: ";
         cin >> terms;

        //  calling function
        fibonacci(terms);
        return 0;
     }

  

    
 