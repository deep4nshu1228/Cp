#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int m; cin >> m;
    vector<int> b(m);
    for(auto &it: b) cin >> it;

    ll sum = 0;
    for(int i=0; i<m; i++){
        sum += 0LL + b[i];
    }

    cout << a[sum%(n*1LL)] << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}