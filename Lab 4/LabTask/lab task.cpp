// Name: Anus Abbas Khan
// Department: Electrical Engineering (power)
// Registration No: BF25NWELE0723
// Section: A

#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store user input
    int num1, num2;
    char op;

    // Get numerical input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Get the desired operation
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Evaluate the operator using a switch statement
    switch(op)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            // Check for division by zero before calculating
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;

        // Handle cases where the operator is not recognized
        default:
            cout << "Invalid operator!";
    }

    return 0;
}
