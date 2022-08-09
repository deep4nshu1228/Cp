#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,x,y;
    cin >> n >> x >> y;

    vector<int> a(x);
    for(auto &it: a) cin >> it;

    int l = *max_element(all(a));

    vector<int> b(y);
    for(auto &it: b) cin >> it;

    int k = *max_element(all(b));

    if(l > k) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}