#include <iostream>
using namespace std;

int BinarySearch(int arr[], int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return BinarySearch(arr, left, mid - 1, target);
    else
        return BinarySearch(arr, mid + 1, right, target);
}

int main()
{
    int arr[] = {2, 4, 9, 11, 13, 32, 43, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 32;

    int result = BinarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}