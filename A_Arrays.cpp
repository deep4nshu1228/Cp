#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int na,nb;
    cin >> na >> nb;

    int k,m;
    cin >> k >> m;

    vector<int> a(na);
    for(auto &it: a) cin >> it;
    vector<int> b(nb);
    for(auto &it: b) cin >> it;

    if(a[k-1]<b[nb-m]){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}