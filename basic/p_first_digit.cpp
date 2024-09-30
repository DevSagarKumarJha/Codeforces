#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int first_digit = 0;

    while(x > 0){
        first_digit = x % 10;
        x /= 10;
    }

    if(first_digit % 2 == 0){
        cout << "EVEN";
    }
    else {
        cout << "ODD";
    }
    return 0;
}