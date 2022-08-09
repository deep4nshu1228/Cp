#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int x[4];
    int one = 0;
    for(int i=0; i<4; i++){
        cin >> x[i];
        if(x[i]==1) one++;
    }

    if(one == 4) cout << "2\n";
    else if(one > 0) cout << "1\n";
    else cout << "0\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}