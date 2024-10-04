#include <bits/stdc++.h>
using namespace std;

void take_input(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int lowest_element(int *arr, int n){
    int lowest = arr[0];

    for(int i = 1; i< n;i++){
        lowest = min(lowest, arr[i]);
    }

    return lowest;
}

int search(int *arr, int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    take_input(arr, n);


    cout<<lowest_element(arr,n)<< " " << search(arr, n, lowest_element(arr, n));
    return 0;
}