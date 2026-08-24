//  Print the sum of digits of a number using a while loop.

#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;  
       
    while (num != 0) {
        sum += num % 10; // add the last digit to sum
        num /= 10; // remove the last digit
    }   
    cout << "Sum of digits: " << sum << endl;
    return 0;
}

