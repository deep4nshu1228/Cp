#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,x;
    cin >> n >> x;

    vector<int> a(2*n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    string ans = "YES";
    for(int i=0; i<n; i++){
        if(a[n+i]-a[i]<x){
            ans = "NO";
        } 
    }
    cout << ans << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}