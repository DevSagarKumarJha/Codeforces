#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int minimum(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << minimum(a, b, c) << " " << maximum(a, b, c);

    return 0;
}