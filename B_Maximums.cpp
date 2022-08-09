#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &it: a) cin >> it;

    vector<int> ans;
    ans.push_back(a[0]);
    for(int i=1; i<n; i++){
        if(a[i-1] < 0)
            ans.push_back(a[i] - a[i-1] + ans[i-1]);
        else
            ans.push_back(a[i]+ans[i-1]);
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}