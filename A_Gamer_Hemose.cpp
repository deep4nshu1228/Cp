#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,h; cin >> n >> h;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int k = a[n-1] + a[n-2];

    if(h%k == 0)
        cout << 2*(h/k) << "\n";
    else if(h%k <= a[n-1])
        cout << 2*(h/k)+1 << "\n";
    else    
        cout << 2*(h/k)+2 << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}