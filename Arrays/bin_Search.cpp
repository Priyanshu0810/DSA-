#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid; // Found

        if (arr[mid] < target)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1; // Not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int target = 40;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
