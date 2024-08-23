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

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i ;
        for (int j = i+1; j < n; j++)
        {
            if(arr[minindex] > arr[j])
            {
                minindex = j ;
            }
        }
        int temp = arr[minindex] ;
        arr[minindex] = arr[i] ;
        arr[i] = temp ;
    }
}

int main()
{
    int arr[] = {2, 9, 7, 6, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Print(arr,n);
    SelectionSort(arr, n);
    Print(arr,n);
}