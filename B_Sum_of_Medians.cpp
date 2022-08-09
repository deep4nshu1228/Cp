#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n, k;
    cin >> k >> n;
    ll a[n*k+1];
    for (int i=1;i<=n*k;i++){
        cin >> a[i];
    }
    ll x=(k+1)/2 - 1;
    x = k - x;
    ll z=n*k+1;
    ll ans=0;
    while(n--){
        z-=x;
        if (z<=0) break;
        ans+=a[z];
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}