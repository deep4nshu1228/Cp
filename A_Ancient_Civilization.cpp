#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k; cin >> n >> k;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int ans = 0;
        for(int i=0; i<k; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(a[j] & (1<<i))
                    cnt++;
            }
            if(cnt > n-cnt)
                ans+=(1<<i);
        }

        cout << ans << "\n";
    }
    return 0;
}