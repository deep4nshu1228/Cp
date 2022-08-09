#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    if(n%2 != 0){
        int i = n/2-1;
        ans = 1;
        while(s[i] == s[n/2] && i>=0){
            ans+=2;
            i--;
        }
    }
    else{
        int i=n/2-2;
        ans = 2;
        while(s[i] == s[n/2] && i>=0){
            ans+=2;
            i--;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}