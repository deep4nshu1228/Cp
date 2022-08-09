#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,x;
        cin >> n >> x;

        vector<int> a(n);
        int mn = INT_MAX;
        for(auto &it: a){
            cin >> it;
            mn = min(mn,it);
        }

        int t = (x+mn-1)/mn;

        int ans = max(t,n);
        cout << ans << "\n";
    }
    return 0;
}