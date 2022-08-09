#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n; cin >> n;
    
    if(n%2 != 0 || n < 4){
        cout << "-1\n";
        return;
    }

    cout << (n+5)/6 << " " << n/4 << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}