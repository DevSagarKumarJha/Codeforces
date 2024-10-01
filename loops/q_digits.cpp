#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    unsigned int n;
    cin >> t;

    while (t > 0)
    {
        cin >> n;

        if (n == 0)
        {
            cout << "0";
        }
        else
        {
            while (n > 0)
            {
                cout << n % 10 << " ";
                n = n / 10;
            }
        }

        cout << endl;
        t--;
    }
    return 0;
}