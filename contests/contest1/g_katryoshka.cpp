#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long largest_katryoshkas = 0;

    if (m == min(n, min(m, k)))
    {
        largest_katryoshkas += m;
        n -= m;
        k -= m;

        largest_katryoshkas += min(n / 2, k);
    }
    else
    {
        largest_katryoshkas += min(n, min(m, k));
    }

    cout << largest_katryoshkas;

    return 0;
}