#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<int> b(n);
    for(auto &it: b) cin >> it;
    
    int dif = INT_MAX;
    for(int i=0; i<n; i++){
        if(b[i] != 0)
            dif = min(dif, a[i]-b[i]);
    }
    if(dif < 0){
        cout << "NO\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(a[i]-b[i] > dif){
            cout << "NO\n";
            return;
        }
        if(a[i]-b[i]<dif && b[i]!=0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}