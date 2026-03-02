#include <iostream>

using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
    
    Calculator(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }

    void displayResults() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "-------------------------" << endl;
        cout << "Addition:       " << add() << endl;
        cout << "Subtraction:    " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division:       " << divide() << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator myCalc(a, b);

    
    cout << "\nCalculator Results:" << endl;
    myCalc.displayResults();

    return 0;
}