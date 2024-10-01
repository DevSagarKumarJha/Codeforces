#include <iostream>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        int a = min(n, m);
        int b = max(n, m);

        int sum = 0;
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
