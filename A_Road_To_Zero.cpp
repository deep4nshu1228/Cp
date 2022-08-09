#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll x,y;
        cin >> x >> y;

        ll a,b;
        cin >> a >> b;

        // ll needed_a = abs(x-y);
        // ll needed_b = min(x,y);

        // ll ans = min(needed_a*a + needed_b*b, (x+y)*a);

        // cout << ans << "\n";

        if(2*a <= b){
            cout << (x+y)*a << "\n";
        }
        else{
            cout << abs(x-y)*a + min(x,y)*b << "\n";
        }
        
    }
    return 0;
}