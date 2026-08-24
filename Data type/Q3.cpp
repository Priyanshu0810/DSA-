
// Question3: Build a Simple Interest Calculator. Input: principal (P), rate (R), time (T). Output: (P * R * T) / 100
#include<iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time period: ";
    cin >> time;

    float simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;
    
    float total_amount = principal + simple_interest;
    cout << "Total Amount: " << total_amount << endl;
    return 0;
}