#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int cost(string& a, string& b){
    int val = 0;
    for(int i=0; i<a.size(); i++){
        val += abs(a[i]-b[i]);
    }
    return val;
}
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m;
        cin >> n >> m;

        vector<string> s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }

        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans = min(ans, cost(s[i],s[j]));
            }
        }

        cout << ans << "\n";
    }
    return 0;
}