#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    cout << "Enter a Number: ";
    cin >> number; 

    if (number % 2 == 0)
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;

    // 8 / 2 = 4 with 0 remainder
    // 9 / 2 = 4 with 1 remainder

    return 0;
}