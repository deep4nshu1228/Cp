#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n,q;
    cin >> n >> q;

    vector<ll> a(n);
    for(auto &it: a) cin >> it;
    
    sort(all(a));
    vector<ll> s(n+1);
    for(int i=0; i<n; i++){
        s[i+1] = s[i] + a[i];
    }
    while(q--){
        ll x,y; cin >> x >> y;
        cout << s[n-x+y] - s[n-x] << "\n";
    }
}
int main()
{
    solve();
    return 0;
}