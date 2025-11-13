#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        int num;
        cout << "Enter any Number: ";
        cin >> num;
        for (int i = 1; i <= 10; i++) {
            cout << num << "x" << i << "=" << num * i << endl;
        }
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}