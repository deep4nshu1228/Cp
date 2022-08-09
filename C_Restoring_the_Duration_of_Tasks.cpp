#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin >> n;
    int s[n];
    int f[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
 
    for (int i = 0; i < n; ++i) {
        cin >> f[i];
    }
    int curTime = 0;
    int d[n];
    for (int i = 0; i < n; ++i) {
        curTime = max(curTime, s[i]);
        d[i] = f[i] - curTime;
        curTime = f[i];
    }
    for (auto now: d) {
        cout << now << " ";
    }
    cout << '\n';
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}