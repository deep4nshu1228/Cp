#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int l,r;
    cin >> l >> r;

    if(2*l > r)
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