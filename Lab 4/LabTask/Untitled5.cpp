// Name: Anus Abbas Khan
// Department: Electrical Engineering (power)
// Registration No: BF25NWELE0723
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

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
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;

}
