#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(3);
    for(auto &it: a) cin >> it;

    if(a[n-1] == 0 || a[a[n-1]-1] == 0){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}