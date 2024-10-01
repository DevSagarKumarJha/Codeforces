#include<bits/stdc++.h>
using namespace std;
 
long long factorial(int n){
    long long fact = 1;
 
    if(n==0 || n==1){
        return 1;
    }
    
    for(int i = 1; i<=n ; i++){
        fact = fact *i;
    }
    return fact;
}
 
int main(){
    int t;
    cin>>t;
 
    int arr[t];
    int i =0;
    
    while(i<t){
        cin>>arr[i];
        i++;
    }
 
    for(int j =0; j<t; j++){
        cout<< factorial(arr[j])<<endl;
    } 
}