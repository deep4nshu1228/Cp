#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &it: a) cin >> it;

        vector<ll> b(n);
        for(auto &it: b) cin >> it;

        vector<ll> ans;
        for(int i=0; i<n; i++){
            ll x = abs(a[i] - a[i-1]);
            ll y = abs(b[i] - b[i-1]);

            ll g = abs(b[i] - a[i-1]);
            ll h = abs(a[i] - b[i-1]);

            if(x+y > g+h){
                swap(a[i],b[i]);
            }
        }
        ll sum = 0;
        for(int i=1; i<n; i++){
            sum += abs(a[i] - a[i-1]) + abs(b[i] - b[i-1]);
        }
        cout << sum << "\n";
    }
    return 0;
}