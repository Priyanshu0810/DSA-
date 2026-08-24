// Assignment Question 1

// Question1: In a program, input the side of a square. You have to output the area of the square.
#include <iostream>
using namespace std;

int main() {
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;
    int area = side * side;
    cout << "The area of the square is: " << area << endl;
    return 0;
}