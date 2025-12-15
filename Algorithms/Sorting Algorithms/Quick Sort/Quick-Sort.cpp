#include <iostream>
using namespace std;

void QuickSort(int arr[], int size)
{
    if (size <= 1)
        return;

    int pivot = arr[size - 1];
    int i = -1;

    for (int j = 0; j < size - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[size - 1]);

    QuickSort(arr, i + 1);
    QuickSort(arr + i + 2, size - i - 2);
}

void DisplayArr(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 9, 13, 43, 02, 32, 11, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting" << endl;
    DisplayArr(arr, n);
    QuickSort(arr, n);
    cout << "After Sorting" << endl;
    DisplayArr(arr, n);
}