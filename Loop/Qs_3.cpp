// print the digits of a number in reverse order.

#include <iostream>
using namespace std;    
int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Digits in reverse order: ";
    while (num > 0) {
        int digit = num % 10; // get the last digit
        cout << digit << " "; // print the digit
        num /= 10;  // remove the last digit
    }
    cout << endl;
    return 0;
}