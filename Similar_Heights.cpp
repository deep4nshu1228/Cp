#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n; cin >> n;
    map<int,int> mp;
    vector<ll> a(n);
    for(auto &it: a){
        cin >> it;
        mp[it]++;
    }
    
    sort(all(a));
    int cnt=0,gp3=0;
    for(auto &x: mp){
        if(x.second == 1) cnt++;
        if(x.second > 2) gp3++;
    }
    
    if(cnt == 1 && !gp3 && mp[a.back()]==1){
        cout << "2\n";
        return;
    }
    cout << (cnt + 1)/2 << "\n";
    return;
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}