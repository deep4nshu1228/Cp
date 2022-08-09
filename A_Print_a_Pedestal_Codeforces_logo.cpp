#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    if(n%3==0)
        cout << n/3 << " " << n/3+1 << " " << n/3-1 << "\n";
    else if(n%3==1)
        cout << n/3 << " " << n/3+2 << " " << n/3-1 << "\n";
    else
        cout << n/3+1 << " " << n/3+2 << " " << n/3-1 << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}