#include <iostream>
#include <string>

using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    double addition() {
        return a + b;
    }

    double subtraction() {
        return a - b;
    }

    double multiplication() {
        return a * b;
    }

    double division() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
    }
};

int main() {
    double num1, num2;
    string operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (add/sub/mul/div): ";
    cin >> operation;

    Calculator calc(num1, num2);

    if (operation == "add") {
        double result = calc.addition();
        cout << "Result: " << result << endl;
    } else if (operation == "sub") {
        double result = calc.subtraction();
        cout << "Result: " << result << endl;
    } else if (operation == "mul") {
        double result = calc.multiplication();
        cout << "Result: " << result << endl;
    } else if (operation == "div") {
        double result = calc.division();
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid operation entered." << endl;
    }

    return 0;
}

