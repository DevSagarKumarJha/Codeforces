#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}