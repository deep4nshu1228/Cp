#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
ll mod = 998244353;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        if(n%2 != 0){
            cout << "0\n";
            continue;
        }
        ll ans = 1;
        for(int i=1; i<=n/2; i++){
            ans *= 1LL * i * i % mod;
            ans %= mod;
        }

        cout << ans << "\n";
    }
    return 0;
}