#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    long long summation = 0;

    for (int i = 1; i <= n; i++)
    {
        int sod = 0;
        int copy_i = i;
        while(copy_i > 0){
            sod += copy_i % 10;
            copy_i /= 10;
        }

        if( sod >= a && sod <= b){
            summation += i;
        }
    }

    cout<<summation;

    return 0;
}