#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int Max_len = 500000;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n==1){
            cout << x << "\n";
            continue;
        }

        vector<int> ans(n);
        int temp_xor = 0;
        for (int i = 0; i < n-1; i++)
        {
            ans[i] = i;
            temp_xor ^= ans[i];
        }

        int last = temp_xor ^ x;      // associative property

        int set_18 = (1LL << 18);
        
        if(last > n-1 && last <= Max_len){
            ans[n-1] = last;
        }
        else{
            ans[n-1] = set_18 ^ last;
            if( (ans[0]^set_18) == ans[n-1]) {
                ans[1] ^= set_18;
            } 
            else{
                ans[0] ^= set_18;
            }
        }

        for(auto& t: ans){
            cout << t << " ";
        }
        cout << "\n";
        
    }
    return 0;
}