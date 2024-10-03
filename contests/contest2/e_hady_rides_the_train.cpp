#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;

    cin >> n;

    long long row = n / 4;
    long long column;

    if (row % 2 == 0)
    { // Even row
        column = n % 4;
    }
    else
    { // Odd row
        column = 3 - (n % 4);
    }

    cout << row << " " << column;

    return 0;
}