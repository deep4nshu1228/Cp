#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    int w,b;
    cin >> w >> b;

    int b1=n-k1, b2=n-k2;

    if(2*w <= k1 + k2 && 2*b <= b1 + b2)
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