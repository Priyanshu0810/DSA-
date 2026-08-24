// Practice Questions 2 - Print the number is ODD or EVEN

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }


    return 0;

}