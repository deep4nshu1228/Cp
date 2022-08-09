#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    int sum = 0;
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        sum += it;
    }
    if(sum%n != 0){
        cout << "NO\n";
    }
    else{
        int k = sum/n;
        string ans = "NO\n";
        for(int i=0; i<n; i++){
            if(a[i] == k){
                ans = "YES\n";
                break;
            }
        }
        cout << ans;
    }

}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}