//  Print Floyd's Triangle.

#include <iostream>
    using namespace std;

int main()
{
                                
<<<<<<< HEAD
    int n, number = 1;                 //Output:  1
                                         //          2 3
    cout << "Enter number of rows: ";    //          4 5 6
                                         //          7 8 9 10
    cin >> n;
    
    for (int i = 1; i <= n; i++)
=======
    int rows, number = 1;                 //Output:  1
                                         //          2 3
    cout << "Enter number of rows: ";    //          4 5 6
                                         //          7 8 9 10
    cin >> rows;

    for (int i = 1; i <= rows; i++)
>>>>>>> 0bc725148c8599992cfa726e818b0e87e8f268f3
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }

    return 0;
}