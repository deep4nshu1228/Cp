#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &it: a) cin >> it;

    
    ll temp = 1;
    for(int i=0; i<n; i++){
        while(a[i]%2 == 0){
            a[i] /= 2;
            temp *= 2;
        }
    }

    sort(all(a));
    a[n-1] *= temp;

    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    cout << sum << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}