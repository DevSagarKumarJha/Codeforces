#include <bits/stdc++.h>
using namespace std;

void take_input(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void replacement(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    take_input(arr, n);
    replacement(arr, n);
    print_arr(arr, n);
    return 0;
}