#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &it: a) cin >> it;

    cout << a[1] - a[0] << " " << a[n-1] - a[0] << "\n";

    for(ll i=1; i<n-1; i++){
        cout << min(a[i+1] - a[i], a[i] - a[i-1]) << " " << max(a[i] - a[0], a[n-1] - a[i]) << "\n";
    }

    cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0] << "\n";
    return 0;
}