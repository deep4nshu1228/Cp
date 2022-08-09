#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int x,y,n,r;
    cin >> x >> y >> n >> r;

    if(r < x*n){
        cout << "-1\n";
        return;
    }

    int b = (r - n*x)/(y - x);
    b = min(b,n);
    int a = n - b;
    cout << a << " " << b << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}