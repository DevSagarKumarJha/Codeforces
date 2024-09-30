#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d, res;
    cin >> a >> b >> c >> d;

    res = a + b - c;
    if (res == d)
    {
        cout << "YES";
        return 0;
    }

    res = a + b * c;
    if (res == d)
    {
        cout << "YES";
        return 0;
    }

    res = a - b + c;
    if (res == d)
    {
        cout << "YES";
        return 0;
    }

    res = a - b * c;
    if (res == d)
    {
        cout << "YES";
        return 0;
    }

    res = a * b + c;
    if (res == d)
    {
        cout << "YES";
        return 0;
    }

    res = a * b - c;
    if (res == d)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";

    return 0;
}
