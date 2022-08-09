#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int cnt = 0;
    for(int i=1; i<n; i++){
        if(a[i] < k)
            cnt += (k-a[i])/a[0];
        else
            break;
    }
    cout << cnt << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}