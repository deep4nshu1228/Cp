#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll p,a,b,c;
        cin >> p >> a >> b >> c;

        ll ceil_a = (p+a-1)/a;
        ll ceil_b = (p+b-1)/b;
        ll ceil_c = (p+c-1)/c;

        ll ans = min(ceil_a*a , min(ceil_b*b,ceil_c*c)) - p;

        cout << ans << "\n";
    }
    return 0;
}