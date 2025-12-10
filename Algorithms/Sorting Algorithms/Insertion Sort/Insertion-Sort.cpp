#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
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
    InsertionSort(arr, n);
    cout << "After Sorting" << endl;
    DisplayArr(arr, n);
}

