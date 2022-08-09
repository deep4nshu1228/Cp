#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int p = x*b;
    int q = b*(a-1-x);
    int r = y*a;
    int s = a*(b-1-y);

    cout << max(max(p,q), max(r,s)) << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}