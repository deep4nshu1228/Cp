#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;
    
    ll a = n;
    int diff = 0, ans = a;
    ll b;
    while(a < 2*n){
        b = (m/a)*a;
        if((b-a)>diff){
            diff = b-a;
            ans = a;
        }
        a++;
    }
    cout << ans << " " << (m/ans)*ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}