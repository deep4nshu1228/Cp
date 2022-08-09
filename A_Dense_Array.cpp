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

        int cnt = 0;
        for(int i=1; i<n; i++){
            int mx = max(a[i],a[i-1]);
            int mn = min(a[i],a[i-1]);
            int x = ceil(mx/mn);
            while(mx > 2*mn){
                cnt++;
                mn *= 2;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}