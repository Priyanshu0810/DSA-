// add all the digits of a number
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        sum += num % 10; // add the last digit to sum
        num /= 10; // remove the last digit
    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}