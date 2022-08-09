#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    for(int i=0; i<n; i+=2){
        cout << -1*a[i+1] << " " << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}