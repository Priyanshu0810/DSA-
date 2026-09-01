#include <iostream>
using namespace std;
int main()
{
    int n;                                     // when n = 4 the output is
    cout << "enter the no. \n";               //    *
    cin >> n;                                 //    * *
    for (int x = 1; x <= n; x++)              //    * * *
    {                                         //    * * * *
        for (int i = 1; i <= x; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}