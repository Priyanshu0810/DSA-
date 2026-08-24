// practice Question 5: To bulid a simple calculator using switch statement
#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2;
    
    cout << "Enter First numbers: ";
    cin >> num1;
    cout << "Enter second numbers: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "Invalid operator!";
    }
    return 0;
}