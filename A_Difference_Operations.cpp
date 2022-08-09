#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    for(int i=1; i<n; i++){
        if(a[i]%a[0] != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}