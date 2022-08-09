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
        for(auto &it: a) cin >> it;
        vector<int> b(n);
        for(auto &it: b) cin >> it;

        sort(all(a));
        reverse(all(a));
        sort(all(b));

        string ans = "Yes";
        for(int i=0; i<n; i++){
            if(a[i] + b[i] > x){
                ans = "No";
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}