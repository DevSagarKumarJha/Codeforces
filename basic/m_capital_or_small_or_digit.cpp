#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int ch = c;
    

    if(ch >= 48 && ch <= 57){
        cout<<"IS DIGIT";
    }
    else{
        if(ch >= 65 && ch <= 90)
        {
            cout<<"ALPHA\nIS CAPITAL";
        }
        else if(ch >= 97 && ch <=122){
            cout<<"ALPHA\nIS SMALL";
        }
    }
    return 0;
}