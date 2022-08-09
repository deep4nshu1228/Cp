#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    string s; cin >> s;
    int one = count(all(s), '1');
    int zero = count(all(s), '0');

    if(zero == 0)
        cout << "0\n";
    else if(one == 0 || zero < 2)
        cout << "1\n";
    else
        cout << "2\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}