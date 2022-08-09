#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;

    int m; cin >> m;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int sum = 0, cnt = 0;
    for(int i=n-1; i>=0; i--){
        sum += a[i];
        cnt++;
        if(sum >= m){
            cout << cnt << "\n";
            return;
        }
    }
}
int main()
{
    solve();
    return 0;
}