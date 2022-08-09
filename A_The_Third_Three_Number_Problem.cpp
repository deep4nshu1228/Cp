#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    if(n<=3){
        cout << "-1\n";
        return;
    }
    else if(n==4){
        cout << "3 3 1\n";
        return;
    }
    if(n&1)
        cout << "-1\n";
    else
        cout << "0 1 " << (n-1)/2 << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}