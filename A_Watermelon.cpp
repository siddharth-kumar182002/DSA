#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

double divide(int x, int y) {
    if (y != 0) {
        return static_cast<double>(x) / y;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    cout << "Calculator" << endl;
    cout << "Select operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    while (true) {
        cout << "Enter choice (1, 2, 3, 4) or 'q' to quit: ";
        char choice;
        cin >> choice;

        if (choice == 'q') {
            break;
        }

        if (choice != '1' && choice != '2' && choice != '3' && choice != '4') {
            cout << "Invalid choice! Please try again." << endl;
            continue;
        }

        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case '1':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '2':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '3':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '4':
                cout << "Result: " << divide(num1, num2) << endl;
                break;
        }
    }

    return 0;
}
