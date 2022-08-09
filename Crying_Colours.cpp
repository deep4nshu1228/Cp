#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> r(3);
        for(auto &it: r) cin >> it;

        vector<ll> g(3);
        for(auto &it: g) cin >> it;

        vector<ll> b(3);
        for(auto &it:b) cin >> it;

        ll upper_triangle = r[1] + r[2] + g[2];
        ll lower_triangle = g[0] + b[0] + b[1];

        cout << max(upper_triangle, lower_triangle) << "\n";
    }
    return 0;
}