#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        string s; cin >> s;

        int k; cin >> k;
        vector<char> a(k);
        for(auto &it: a) cin >> it;

        vector<int> x(26);
        for(int i=0; i<26; i++){
            x[i] = 0;
        }
        for(int i=0; i<k; i++){
            x[(int)a[i]-97]++;
        }

        vector<int> y;
        y.push_back(1);
        for(int i=0; i<n; i++){
            if(x[(int)s[i]-97] > 0)
                y.push_back(i+1);
        }

        int ans = 0;
        for(int i=1; i<y.size(); i++){
            int l = y[i] - y[i-1];
            ans = max(ans,l);
        }

        cout << ans << "\n";
    }
    return 0;
}