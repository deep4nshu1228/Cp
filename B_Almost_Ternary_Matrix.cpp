#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(j&1) cout << "1 ";
            else cout << "0 ";
        }
        cout << "\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}