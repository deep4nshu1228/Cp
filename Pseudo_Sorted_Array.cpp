#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &it: a) cin >> it;

        if(n==1){
            cout << "YES\n";
            continue;
        }

        ll swap_perform = 0;
        string ans = "YES\n";
        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1] && swap_perform){
                ans = "NO\n";
                break;
            }
            if(a[i] > a[i+1]){
                swap(a[i],a[i+1]);
                swap_perform++;
            }
        }

        cout << ans;
    }
    return 0;
}