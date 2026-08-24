// Practice Question 3: Create an income tax calculator

#include <iostream>
using namespace std;
int main() {
    int income, tax;
    cout << "Enter your income: ";
    cin >> income;
    if(income <= 250000) {
        tax = 0;
    } else if(income <= 500000) {
        tax = (income - 250000) * 0.05;// 5% tax on income above 250000
    } else if(income <= 1000000) {
        tax = (income - 250000) * 0.1;// 10% tax on income above 500000
    } else {
        tax = (income - 250000) *0.3; // 30% tax on income above 1000000
    }
    cout << "Your income tax is: " << tax << endl;
    return 0;
}