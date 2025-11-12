#include <iostream>
using namespace std;

int main() {
    double grossIncome;
    double taxRate;
    double otherDeductions;

    std::cout << "Enter your gross income: $";
    std::cin >> grossIncome;

    std::cout << "Enter your tax rate (as a decimal, example:, 0.15 for 15%): ";
    std::cin >> taxRate;

    std::cout << "Enter any other deductions (example:, insurance, retirement contributions): $";
    std::cin >> otherDeductions;

    double taxAmount = grossIncome * taxRate;

    double totalDeductions = taxAmount + otherDeductions;

    double netIncome = grossIncome - totalDeductions;

    std::cout << "\n--- Income Summary ---" << std::endl;
    std::cout << "Gross Income: $" << grossIncome << std::endl;
    std::cout << "Tax Amount:   $" << taxAmount << std::endl;
    std::cout << "Other Deductions: $" << otherDeductions << std::endl;
    std::cout << "Total Deductions: $" << totalDeductions << std::endl;
    std::cout << "Net Income:   $" << netIncome << std::endl;

    return 0;
}