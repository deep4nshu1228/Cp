#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
ll max(ll x, ll y){
    if(x >= y) return x;
    else return y;
}
ll min(ll x, ll y){
    if(x <= y) return x;
    else return y;
}
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        sort(all(a));
        ll max_freq = 0;
        for(int i=0; i<n; i++){
            int x = a[i];
            int cnt = 0;
            while(a[i] == x && i < n){
                cnt++;
                i++;
            }
            i--;
            max_freq = max(max_freq,cnt);
        }

        ll ans = 0;
        int equal_num = max_freq;
        while(equal_num < n){
            ans++;
            ans += min(equal_num, n-equal_num);
            equal_num *= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}