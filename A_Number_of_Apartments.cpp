#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    if(n<3 || n==4){
        cout << -1 << "\n";
        return;
    }
    if(n%3==0)
        cout << n/3 << " " << 0 << " " << 0 << "\n";
    else if(n%3 == 2)
        cout << (n-5)/3 << " " << 1 << " " << 0 << "\n";
    else
        cout << (n-7)/3 << " " << 0 << " " << 1 << "\n";
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