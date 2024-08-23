#include <iostream>
using namespace std;

void Print(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "," ;
    }
    cout << endl ;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 9, 7, 6, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Print(arr,n);
    BubbleSort(arr, n);
    Print(arr,n);
}