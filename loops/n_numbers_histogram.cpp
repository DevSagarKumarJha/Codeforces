#include <bits/stdc++.h>

using namespace std;

int main()
{
    char symbol;
    cin >> symbol;

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < arr[p]; q++)
        {
            cout<<symbol;
        }
        cout<<endl;
    }
    return 0;
}