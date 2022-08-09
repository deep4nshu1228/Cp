#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin >> n >> k;

    if(n==1){
        cout << "1\n";
        return;
    }
    int cnt = 0;
    while(n){
        if(n%k==0){
            n /= k;
            cnt++;
        } 
        else{
            cnt += (n%k);
            n -= (n%k);
        }
    }
    cout << cnt << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}