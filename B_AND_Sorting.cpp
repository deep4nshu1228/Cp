#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int ans = (1<<30)-1;
    for(int i=0; i<n; i++){
        if(a[i] != i)
            ans &= a[i];
    }
    cout << ans << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}