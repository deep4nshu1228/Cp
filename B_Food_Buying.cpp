#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        ll ans = n;
        while(n>10){
            ans += n/10;
            ll rem = n%10;
            n = n/10 + rem;
        }

        if(ans%10 == 0) ans++;
        cout << ans << "\n";
    }
    return 0;
}