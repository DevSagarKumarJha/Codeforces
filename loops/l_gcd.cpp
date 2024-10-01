#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int m = min(a, b);
    int ans = 1;
    for (int i = 1; i <= m; i++)
    {
        if (a % i == 0 && b % i == 0){
            ans = i;
        }
    }

    cout<<ans;
    return 0;
}