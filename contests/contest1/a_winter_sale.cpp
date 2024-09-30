#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, p;

    cin >> x >> p;

    double discount_percent = x / 100;

    double actual_price = p / (1 - discount_percent);

    cout << fixed << setprecision(2) << actual_price;

    return 0;
}