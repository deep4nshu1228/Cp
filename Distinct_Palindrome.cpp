#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,x;
    cin >> n >> x;

    if(n==1){
        cout << "a\n";
        return;
    }

    if(x > (n+1)/2){
        cout << "-1\n";
        return;
    }

    string ans;
    for(int i=0; i<x; i++){
        ans[i] = 'a' + i;
        cout << ans[i];
    }
    
    for(int i=x; i<(n+1)/2; i++){
        ans[i] = 'a';
        cout << ans[i];
    }
    for(int i=(n+1)/2; i<n; i++){
        ans[i] = ans[n-1-i];
        cout << ans[i];
    }
    cout << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}