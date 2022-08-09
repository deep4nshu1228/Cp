#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;

    bool ans = false;
    for(int i=0; i<n; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b == c) ans = true;
    }

    if(m%2==0 && ans) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}