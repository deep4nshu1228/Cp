#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        ll ans = 0;
        ll x = n/2 + 1;
        ll m = 1;
        for(ll i=1; i<=x; i++){
            ll k = 4*m - 4;
            m+=2;
            ans += (i-1)*k;
        }

        cout << ans << "\n";
    }
    return 0;
}