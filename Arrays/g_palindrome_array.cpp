#include <bits/stdc++.h>
using namespace std;

void take_input(long long *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void copy_arr(long long *arr, long long *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
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
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool is_palindrome_array(long long *arr, int n)
{
    long long arr2[n];
    copy_arr(arr, arr2, n);
    reverse(arr2, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    long long arr[n] ;
    take_input(arr, n);
    if(is_palindrome_array(arr,n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}