#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]==1)
            cnt++;
        else if(a[i]==0 && (i-1)>=0 && a[i-1]==1 && (i+1)<n && a[i+1]==1)
            cnt++;
    }
    cout << cnt << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}