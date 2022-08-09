#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> ans(n);

    for(int i=1; i<=n; i++){
        int x = (l+(i-1))/i;
        ans[i-1] = x*i;
        if(ans[i-1] > r || ans[i-1] < l){
            cout <<  "NO\n";
            return;
        }
    }

    cout << "YES\n";
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return;
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}