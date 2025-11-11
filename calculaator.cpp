#include <iostream>

int main() {
    char choice; // To store user's choice to continue or not
    double num1, num2, result;
    char operation;

    do {
        // Clear screen (optional, system-dependent)
        // system("CLS"); // For Windows
        // system("clear"); // For Linux/macOS

        std::cout << "Simple Calculator" << std::endl;
        std::cout << "-----------------" << std::endl;
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operation) {
            case '+':
                result = num1 + num2;
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case '-':
                result = num1 - num2;
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case '*':
                result = num1 * num2;
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Invalid operator. Please use +, -, *, or /." << std::endl;
                break;
        }

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thank you for using the calculator. Goodbye!" << std::endl;

    return 0;
}