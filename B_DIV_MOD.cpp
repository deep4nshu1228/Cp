#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll l,r,a;
        cin >> l >> r >> a;

        ll ans = r/a + r%a;

        ll m = r/a * a - 1;

        if(m >= l) ans = max(ans, m/a + m%a);
        cout << ans << "\n";

    }
    return 0;
}