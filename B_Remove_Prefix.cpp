#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int x = *max_element(all(a));
    int cnt[x+1]={0};
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }
    int index = 0;
    for(int i=1; i<=n; i++){
        if(cnt[a[i-1]]>1){
            cnt[a[i-1]]--;
            index = i;
        }
    }
    cout << index << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}