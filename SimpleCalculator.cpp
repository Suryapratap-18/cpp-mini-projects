#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        cout << "Answer = " << num1 + num2;
        break;

    case '-':
        cout << "Answer = " << num1 - num2;
        break;

    case '*':
        cout << "Answer = " << num1 * num2;
        break;

    case '/':
        if (num2 == 0)
            cout << "Cannot divide by zero";
        else
            cout << "Answer = " << num1 / num2;
        break;

    default:
        cout << "Invalid operator";
    }

    return 0;
}
