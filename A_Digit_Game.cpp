#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int dig; cin >> dig;
    string n; cin >> n;

    bool od = false, ev = false;
    for(int i=1; i<=dig; i++){
        if(i%2==1)
            od |= ((n[i-1]-'0')&1);
        else
            ev |= ((n[i-1]-'0')%2==0);
    }

    if(dig&1){
        cout << (od?1:2) << "\n";
    }
    else{
        cout << (ev?2:1) << "\n";
    }
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