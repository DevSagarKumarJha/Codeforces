#include <bits/stdc++.h>
using namespace std;
int main()
{
    double N;
    cin >> N;

    int integerPart = static_cast<int>(N);

    double decimalPart = N - integerPart;

    if (decimalPart == 0)
    {
        cout << "int " << integerPart << endl;
    }
    else
    {
        cout << "float " << integerPart << " " << decimalPart << endl;
    }
    return 0;
}