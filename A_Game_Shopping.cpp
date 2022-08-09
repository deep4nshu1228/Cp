#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(auto &it: a) cin >> it;
    vector<int> b(m);
    for(auto &it: b) cin >> it;

    int k=0;
    for(int i=0; i<n; i++){
        if(a[i] <= b[k]){
            k++;
        }
        if(k == m) break;
    }

    cout << k << "\n";
}
int main()
{
    solve();
    return 0;
}