#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n,a,b;
    cin >> n >> a >> b;

    if(b < 2*a){
        if(n&1)
            cout << (n/2*b)+a << "\n";
        else 
            cout << (n/2*b) << "\n";
    }
    else{
        cout << n*a << "\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}