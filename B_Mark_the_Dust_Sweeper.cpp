#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &it: a) cin >> it;

    ll x = 0;
    for(int i=0; i<n-1; i++){
        if(i==0)
            while(!a[i]) i++;
        if(a[i]==0) x++;
    }
    ll sum=0;
    for(int i=0; i<n-1; i++){
        sum+=a[i];
    }
    if(sum) cout << x+sum << "\n";
    else cout << 0 << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}