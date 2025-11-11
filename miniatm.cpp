#include <iostream> // Required for input/output operations
#include <iomanip>  // Required for formatting output (e.g., setprecision)

int main() {
    double balance = 1000.00; // Initial account balance
    double amount;            // Variable to store withdrawal/deposit amount
    int option;               // Variable to store user's menu choice

    std::cout << "Welcome to the Mini ATM!" << std::endl;

    do {
        std::cout << "\n--- Main Menu ---" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Withdraw Cash" << std::endl;
        std::cout << "3. Deposit Cash" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> option;

        switch (option) {
            case 1:
                std::cout << "\nYour current balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
                break;
            case 2:
                std::cout << "\nEnter amount to withdraw: $";
                std::cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    std::cout << "Withdrawal successful. Remaining balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
                } else if (amount <= 0) {
                    std::cout << "Invalid amount. Please enter a positive value." << std::endl;
                } else {
                    std::cout << "Insufficient funds." << std::endl;
                }
                break;
            case 3:
                std::cout << "\nEnter amount to deposit: $";
                std::cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    std::cout << "Deposit successful. New balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
                } else {
                    std::cout << "Invalid amount. Please enter a positive value." << std::endl;
                }
                break;
            case 4:
                std::cout << "\nThank you for using the Mini ATM. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "\nInvalid option. Please try again." << std::endl;
                break;
        }
    } while (option != 4); // Loop until the user chooses to exit

    return 0;
}