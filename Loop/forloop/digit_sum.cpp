// Sum all the digits of a number using a for loop.
#include <iostream> 
    using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;     
    for (int i = num; i > 0; i /= 10) {
        sum += i % 10; // add the last digit to sum
        num /= 10;
        cout << "Current sum: " << sum << endl;
    }   
        return 0;
}