#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    string s; cin >> s;

    if( (s[0] == 'Y' || s[0] == 'y')
        && (s[1] == 'E' || s[1] == 'e')
        && (s[2] == 'S' || s[2] == 's') )
        cout << "YES\n";
    else 
        cout << "NO\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}