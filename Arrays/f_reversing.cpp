#include <bits/stdc++.h>
using namespace std;

void take_input(long long *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void print_arr(long long *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(long long *arr, int size)
{
    int i = 0;
    int j = size -1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    take_input(arr, n);
    reverse(arr,n);
    print_arr(arr, n);
    return 0;
}