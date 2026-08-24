#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of an array : \n";
    cin >> n;
    int arr[n];
    cout << "enter the array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The smallest num is :" << min << " ";
    return 0;
}