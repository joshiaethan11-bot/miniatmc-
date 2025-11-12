#include <iostream>
using namespace std;

int main()
{
    char choice;
    do {
        int gross_salary,basic,da,ta;
        cout << "Enter your Basic Salary: ";
        cin >> basic;
        da = (10*basic) / 100;
        ta = (12*basic) / 100;
        gross_salary = basic + da + ta;
        cout << "Your Gross Salary is: " << gross_salary << endl;
       
        cout << "Do you want to calculate for another salary? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}