#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    int even = 0, odd = 0, negative = 0, positive = 0;

    while (t > 0)
    {
        cin >> n;
        if (n < 0)
        {
            negative++;
            if (n % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if (n > 0)
        {
            positive++;
            if (n % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                even++;
            }
        }

        t--;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}