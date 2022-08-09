#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    sort(all(a));
    vector<int> b;
    for(int i=0; i<n; i++){
        if(i==0 || a[i] != a[i-1]){
            b.push_back(a[i]);
        }
    }

    for(int i=0; i<n; i++){
        if(i>0 && a[i] == a[i-1]){
            b.emplace_back(a[i]);
        }
    }

    for(auto &it: b){
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}