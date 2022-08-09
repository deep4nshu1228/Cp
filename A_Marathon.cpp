#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int cnt = 0;
    if(a < b) cnt++;
    if(a < c) cnt++;
    if(a < d) cnt++;

    cout << cnt << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}