#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    for(int i = 4*n; i >= 2*n + 2; i-=2){
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}