#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int min = 0;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
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
    SelectionSort(arr, n);
    cout << "After Sorting" << endl;
    DisplayArr(arr, n);
}
