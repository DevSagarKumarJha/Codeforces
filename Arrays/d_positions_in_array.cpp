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
        if (arr[i] <= 10)
        {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    take_input(arr, n);
    print_arr(arr, n);
    return 0;
}