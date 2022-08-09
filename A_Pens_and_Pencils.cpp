#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a,b,c,d,k;
    cin >> a >> b >> c >> d >> k;

    int x = (a+c-1)/c;
    int y = (b+d-1)/d;

    if(x+y>k)
        cout << "-1\n";
    else
        cout << x << " " << y << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}