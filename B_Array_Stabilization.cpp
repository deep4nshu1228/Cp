#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));

    cout << min(a[n-2]-a[0], a[n-1]-a[1]) << "\n";
}
int main()
{
    solve();
    return 0;
}