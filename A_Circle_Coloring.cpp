#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        vector<int> a(n);
        for(auto &it: a) cin >> it;
        vector<int> b(n);
        for(auto &it: b) cin >> it;
        vector<int> c(n);
        for(auto &it: c) cin >> it;

        vector<int> ans;
        ans.push_back(a[0]);
        for(int i=1; i<n-1; i++){
            if(a[i] != ans[i-1]) ans.push_back(a[i]);
            else if(b[i] != ans[i-1]) ans.push_back(b[i]);
            else ans.push_back(c[i]);
        }

        if(ans[0] != a[n-1] && ans[n-2] != a[n-1]) ans.push_back(a[n-1]);
        else if(ans[0] != b[n-1] && ans[n-2] != b[n-1]) ans.push_back(b[n-1]);
        else ans.push_back(c[n-1]);
        
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}