#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    long long product = 1;

    product = (product * a) % 100;
    product = (product * b) % 100;
    product = (product * c) % 100;
    product = (product * d) % 100;

    cout << setfill('0') << setw(2) << product << endl;

    return 0;
}