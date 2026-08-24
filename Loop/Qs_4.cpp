 
 // Reverse a number using a loop
#include <iostream>
using namespace std;
int main() {
    int num, reversedNum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10; // get the last digit
        reversedNum = reversedNum * 10 + digit; // build the reversed number
        num /= 10; // remove the last digit
    }

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}