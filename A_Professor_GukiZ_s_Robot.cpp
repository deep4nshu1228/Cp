#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << max(abs(a-c),abs(b-d)) << "\n";
}
int main()
{
    solve();
    return 0;
}