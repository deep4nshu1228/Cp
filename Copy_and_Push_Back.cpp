#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    string s; cin >> s;

    while(s.size()){
        if(s.size()&1)
            s.pop_back();
        else{
            if(s.substr(0,s.size()/2) != s.substr(s.size()/2,s.size()/2)){
                cout << "NO\n";
                return;
            }
            s = s.substr(0,s.size()/2);
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