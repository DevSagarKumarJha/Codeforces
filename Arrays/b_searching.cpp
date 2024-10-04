#include <bits/stdc++.h>
using namespace std;

void take_input(long long *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int search(long long *arr, int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    take_input(arr, n);

    long long element;
    cin >> element;

    cout << search(arr, n, element);
    return 0;
}