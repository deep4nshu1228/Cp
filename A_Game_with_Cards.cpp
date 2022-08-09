#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int m; cin >> m;
    vector<int> b(m);
    for(auto &it: b) cin >> it;

    int x = *max_element(all(a));
    int y = *max_element(all(b));

    if(x == y)
        cout << "Alice\nBob\n";
    else if(x < y)
        cout << "Bob\nBob\n";
    else
        cout << "Alice\nAlice\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}