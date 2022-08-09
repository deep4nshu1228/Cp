#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    if(n%3 == 0)
        cout << "0\n";
    else if(n%3 == 1)
        cout << "2\n";
    else 
        cout << "1\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}