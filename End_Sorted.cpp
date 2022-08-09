#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int index_one,index_n;
    for(int i=1; i<=n; i++){
        if(a[i-1]==1) index_one = i;
        else if(a[i-1]==n) index_n = i;
    }

    int ans = (index_one-1) + (n-index_n);
    if(index_one < index_n){
        cout << ans << "\n";
    }
    else{
        cout << ans-1 << "\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}