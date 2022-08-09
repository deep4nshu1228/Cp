#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,x; cin >> n >> x;
    if(n<x){
        cout << "0\n";
        return;
    }
    int y = n-x;
    cout << (y+3)/4 << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}