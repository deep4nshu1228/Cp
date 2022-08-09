#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n,q;
    cin >> n >> q;

    ll sum = 0;
    vector<ll> a(n);
    for(auto &it: a){
        cin >> it;
        sum += it;
    }
    while(q--){
        ll k;
        cin >> k;
        int lq = 0;
        if(k == 1){
            ll i,x;
            cin >> i >> x;
            sum = (sum - lq) + abs(x-lq);
            cout << sum << "\n";
        }
        else{
            ll x;
            cin >> x;
            sum = n*x;
            cout << sum << "\n";
            lq = x;
        }
    }
    return 0;
}