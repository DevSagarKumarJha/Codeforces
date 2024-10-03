#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int maxCount = 0;
    while(t--){
        long long n;
        cin >> n;
        int count = 0;
        while(n%2 != 1){
            count++;
            n /=2;
        }

        maxCount = max(maxCount , count);
    }

    cout<<maxCount;
    return 0;
}