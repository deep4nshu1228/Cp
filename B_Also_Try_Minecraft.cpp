#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m; cin >> n >> m;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    for(int i=0; i<m; i++){
        int ans = 0;
        int x,y; cin >> x >> y;
        if(x < y){
            for(int i=x-1; i<y-1; i++){
                if(a[i] > a[i+1])
                    ans += a[i]-a[i+1];
            }
        }
        else{
            for(int i=x-1; i>y-1; i--){
                if(a[i] > a[i-1])
                    ans += a[i]-a[i-1];
            }
        }
        cout << ans << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}