#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n; cin >> n;
    ll k=1;
    while(k<=n){
        k*=10;
    }
    k/=10;
    cout << (n-k) << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}