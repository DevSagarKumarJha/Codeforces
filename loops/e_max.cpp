#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long x, ans = 0;

    while (n > 0)
    {
        cin >> x;
        ans = max(ans, x);
        n--;
    }
    cout << ans;
    return 0;
}