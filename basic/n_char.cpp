#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    int int_a = a;

    if(int_a >= 65 && int_a <= 90){
        a += 32;
    }
    else if(int_a >=97 && int_a <= 122){
        a -=32;
    }

    cout<<a;
    return 0;
}