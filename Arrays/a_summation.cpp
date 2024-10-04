#include <bits/stdc++.h>
using namespace std;

void take_input(long long *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

long long absolute_summation(long long *arr, int size)
{
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return abs(sum);
}

int main()
{
    int N;
    cin >> N;

    long long A[N];
    take_input(A, N);
    cout <<absolute_summation(A, N);
    return 0;
}