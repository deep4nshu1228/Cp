#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;
        
        vector<int> count(32);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 31; j++){
                if((1LL << j) & a[i]){
                    count[j]++;
                }
            }
        }

        ll ans = 0;
        for(int i = 0; i < 31; i++){
            if(count[i] > 1){
                ans += (1LL << i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}