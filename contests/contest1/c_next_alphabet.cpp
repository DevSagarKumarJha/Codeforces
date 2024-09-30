#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;

    if(a >= 97 && a <= 122){
        if(a == 122){
            a = 96;
        }
        a++;
    }


    cout<<a;
    return 0;
}