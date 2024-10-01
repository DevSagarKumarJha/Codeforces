#include <bits/stdc++.h>
using namespace std;
 
int main()
{
long n;
cin>> n;
bool isprime = true;
    for(int i =2; i<=n/2; i++){
        if(n % i == 0){
            isprime = false;
        }
    }
 
    if(!isprime){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    return 0;
}