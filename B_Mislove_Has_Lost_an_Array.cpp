#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,l,r;
    cin >> n >> l >> r;

    int mn=0, mx=0;
    for(int i=0; i<l; i++){
        mn += (1<<i);
    }
    mn += (n-l);

    for(int i=0; i<r; i++){
        mx += (1<<i);
    }
    mx += (n-r)*(1<<(r-1));

    cout << mn << " " << mx << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}