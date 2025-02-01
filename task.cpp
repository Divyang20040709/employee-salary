//employee salary as per daily work hours

#include <iostream>
using namespace std;

int main() {
    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    int salary[numEmployees];
    int leaveDays[numEmployees];
    const int dailySalary = 1000;

    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter leave days for employee " << (i + 1) << ": ";
        cin >> leaveDays[i];

        // Calculate salary after leave deduction
        salary[i] = (30 - leaveDays[i]) * dailySalary;
    }

    cout << "\nFinal Salary of Employees:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << (i + 1) << ": Rs. " << salary[i] << endl;
    }

    return 0;
}
