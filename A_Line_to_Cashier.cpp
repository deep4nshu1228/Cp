#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<a[i]; j++){
            int x; cin >> x;
            sum += x;
        }
        ans = min(ans, (sum*5)+(a[i]*15));
    }

    cout << ans << "\n";
    return;
}
int main()
{
    solve();
    return 0;
}