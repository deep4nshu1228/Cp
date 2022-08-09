#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    vector<int> a(3);
    for(auto &it: a) cin >> it;
    int d; cin >> d;
    sort(all(a));

    int k = (a[1]-a[0]);
    int j = (a[2]-a[1]);
    cout << max(0,(d-k)) + max(0,(d-j)) << "\n";
}
int main()
{
    solve();
    return 0;
}