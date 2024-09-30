#include <bits/stdc++.h>
using namespace std;
int main()
{
    int days;
    cin >> days;

    cout << days / 365 << " years" << endl;
    
    days %= 365;

    cout << days / 30 << " months" << endl;
    days %= 30;

    cout << days << " days" << endl;

    return 0;
}