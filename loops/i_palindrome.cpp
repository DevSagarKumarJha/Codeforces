#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        revNum = revNum * 10 + (n % 10);
        n /= 10;
    }
    return revNum;
}

int main()
{
    int n;
    cin >> n;
    if (reverseNum(n) == n)
    {
        cout << reverseNum(n) << "\nYES";
        return 0;
    }
    cout << reverseNum(n) << "\nNO";
    return 0;
}