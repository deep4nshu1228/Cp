#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n; cin >> n;
    ll sum = 0;
    vector<ll> a(n);
    for(auto &it: a){
        cin >> it;
        sum += it;
    }

    int k = *min_element(all(a));
    if(k==1){
        cout << "CHEF\n";
        return;
    }
    
    if(sum%2==0) cout << "CHEFINA\n";
    else cout << "CHEF\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}