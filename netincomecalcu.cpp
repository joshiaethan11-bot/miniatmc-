#include <iostream>
using namespace std;

int main() {
    char choice;
    do { 
    double basicSalary, allowance, deduction, netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Allowance: ";
    cin >> allowance;
    cout << "Enter Deduction: ";
    cin >> deduction;

    netSalary = basicSalary + allowance - deduction;

    cout << "Net Salary: " << netSalary << endl;

    cout << "Do you want to calculate again? (y/n): ";
    cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;

}