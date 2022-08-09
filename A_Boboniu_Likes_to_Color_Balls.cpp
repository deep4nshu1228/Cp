#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
bool check(int r, int b, int g, int w){
    if(r%2 + b%2 + g%2 + w%2 > 1)
        return false;
    return true;
}
void solve(){
    ll r,g,b,w;
    cin >> r >> g >> b >> w;

    if(check(r,b,g,w)){
        cout << "Yes\n";
    }
    else if(r>0 && g>0 && b>0 && check(r-1,b-1,g-1,w+1)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
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