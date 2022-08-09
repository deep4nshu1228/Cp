#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int t,n,s;
    cin >> t >> n >> s;

    int x = s/n;
    int y = s%n;

    if(x >= t){
        cout << (n*n*t) << "\n";
    }
    else{
        cout << (n*n*x)+(y*y) << "\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}