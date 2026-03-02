#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    double basicPay;
    double hra;
    double da;

public:
    
    void inputDetails(int id) {
        cout << "\nEnter details for Employee " << id << ":" << endl;
        cout << "Name: ";
        cin>> name;
        cout << "Basic Pay: ";
        cin >> basicPay;
        cout << "HRA: ";
        cin >> hra;
        cout << "DA: ";
        cin >> da;
    }

    
    double calculateGrossSalary() {
        return basicPay + hra + da;
    }

    
    void displaySalary() {
        cout << "Name: " << name 
                  << " | Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main() {
    
    Employee employees[3];

    
    for (int i = 0; i < 3; i++) {
        employees[i].inputDetails(i + 1);
    }

    
    cout << "\n--- Employee Salary Report ---" << endl;
    for (int i = 0; i < 3; i++) {
        employees[i].displaySalary();
    }

    return 0;
}