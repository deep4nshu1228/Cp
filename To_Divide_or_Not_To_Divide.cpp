#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll a,b,n;
    cin >> a >> b >> n;

    if(b==1 || a%b == 0){
        cout << -1 << "\n";
        return;
    }

    int x = (n+a-1)/a;
    int ans = a*x;
    while(ans%b == 0){
        x++;
        ans = a*x;
    }
    cout << ans << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}