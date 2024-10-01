#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int bin_n = 0;

        while(n > 0){
            if(n%2 == 1){
                bin_n++;
            }
            n /= 2;
        }


        float i = 0;
        
        while(bin_n--){
            n += pow(2, i);
            i++;
        }

        cout<<n<<endl;
    }
    
    return 0;
}