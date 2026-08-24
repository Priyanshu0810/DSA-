// print the sum of odd digits of a number using a while loop.

#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10; // get the last digit
        if (digit % 2 != 0) { // check if the digit is odd
            sum += digit; // add the odd digit to sum
        }
        num /= 10; // remove the last digit
    }
    cout << "Sum of odd digits: " << sum << endl;
    return 0;
}