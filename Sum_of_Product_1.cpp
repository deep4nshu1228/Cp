#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    ll ans = 0, cnt = 0;
    for(int i=0; i<n-1; i++){
        if(a[i]==1 && a[i+1]==1) cnt++;
        else if(a[i]==1) cnt++;
        else{
            ans += (cnt*(cnt+1))/2;
            cnt=0;
        }
    }
    if(a[n-1]==1) cnt++;
    ans += (cnt*(cnt+1))/2;

    cout << ans << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}