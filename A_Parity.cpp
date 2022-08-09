#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int b,n;
    cin >> b >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int od=0;
    if(b&1){
        for(int i=0; i<n-1; i++){
            if((a[i]&1)) od++;
        }
    }
    if(a[n-1]&1) od++;

    if(od&1) cout << "odd\n";
    else cout << "even\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}