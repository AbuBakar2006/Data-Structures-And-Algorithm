#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    BubbleSort(arr, n);
    cout << "After Sorting" << endl;
    DisplayArr(arr, n);
}
