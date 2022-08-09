#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int s = 0;
    for(int i=1; i<n; i++){
        s += a[i];
    }

    if(a[0]+s <= m){
        cout << a[0]+s << "\n";
    }
    else{
        cout << m << "\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}