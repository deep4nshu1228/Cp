#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for(auto &it: a) cin >> it;

    ll x = *max_element(all(a));
    cout << max((x|k),(x&k)) << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}