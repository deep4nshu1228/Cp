#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    vector<int> b(m);
    for(auto &it: b) cin >> it;

    int ea=0,oa=0,eb=0,ob=0;
    for(int i=0; i<n; i++){
        if(a[i]&1) oa++;
        else ea++;
    }
    for(int i=0; i<m; i++){
        if(b[i]&1) ob++;
        else eb++;
    }

    cout << min(ea,ob) + min(oa,eb) << "\n";
}
int main()
{
    solve();
    return 0;
}