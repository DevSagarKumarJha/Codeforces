#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n < 10 || n > 99)
    {
        return 0;
    }

    int tensdigit = n / 10;
    int oncedigit = n % 10;
    if (oncedigit == 0)
    {
        cout << "YES";
    }

   else if (tensdigit % oncedigit == 0 || oncedigit % tensdigit == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}