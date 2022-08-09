#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    string s; cin >> s;
    int n = s.size();
    set<char> x;
    int ans = 0;
    int m = false;
    for(int i=0; i<n; i++){
        x.insert(s[i]);
        if(x.size()==4){
            ans++;
            x.clear();
            x.insert(s[i]);
        }

        if(i==n-1 && x.size()>0) m = true;
    }

    if(m) cout << ans+1 << "\n";
    else cout << ans << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}