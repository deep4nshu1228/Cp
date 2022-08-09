#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    int y = min(b,c/2);
    b-=y;
    c-=2*y;
    int x = min(a,b/2);

    int k = 3*x + 3*y;
    cout << k << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}