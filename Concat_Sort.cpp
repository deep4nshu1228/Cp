#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(all(b));
    int index = 0;
    for(int i=0; i<n; i++){
        if(a[i]==b[index]) index++;
    }
    for(int i=0; i<n; i++){
        if(a[i]==b[index]) index++;
    }

    if(index >= n) cout << "YES\n";
    else cout << "NO\n";
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