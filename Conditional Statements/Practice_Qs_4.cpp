// Practice Questions 2 - three largest numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number  A :";
    cin >> a;
    cout << "Enter the number  B:";
    cin >> b;
    cout << "Enter the number C:";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " A is larger" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " B is greater " << endl;
    }
    else
    {
        cout << c << "  is large" << endl;
    }
    return 0;
}