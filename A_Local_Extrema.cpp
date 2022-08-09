#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    if(n<3){
        cout << "0\n";
        return;
    }

    int cnt = 0;
    for(int i=1; i<n-1; i++){
        if( (a[i] < a[i-1] && a[i] < a[i+1]) || (a[i] > a[i-1] && a[i] > a[i+1]) ){
            cnt++;
        }
    }

    cout << cnt << "\n";
}
int main()
{
    solve();
    return 0;
}