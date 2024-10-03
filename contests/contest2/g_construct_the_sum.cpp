#include <bits/stdc++.h>
using namespace std;
int res[100005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long num1, num2;
        cin >> num1 >> num2;
        int cou = 0;

        if (num1 * (num1 + 1) / 2 < num2)
        {
            cout << -1;
        }
        else
        {
            long long sum = 0;
            for (long long i = num1; i > 1; i--)
            {
                if (sum + i <= num2)
                {
                    sum += i;
                    res[cou] = i;
                    cou++;
                }

                if (sum == num2)
                {
                    break;
                }
            }
            
        }
        for (int x = 0; x < cou; x++)
        {
            cout << res[x] << " ";
        }
        cout << endl;
        cou = 0;
    }
    return 0;
}
