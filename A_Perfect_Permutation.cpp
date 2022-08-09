#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    if(n==1){
        cout << 1 << "\n";
        return;
    }
    if(n%2 == 0){
        for(int i=1; i<=n; i++){
            if(i&1) cout << i+1 << " ";
            else cout << i-1 << " ";
        }
        cout << "\n";
    }
    else{
        for(int i=1; i<=n-3; i++){
            if(i&1) cout << i+1 << " ";
            else cout << i-1 << " ";
        }
        cout << n << " " << n-1 << " " << n-2 << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}