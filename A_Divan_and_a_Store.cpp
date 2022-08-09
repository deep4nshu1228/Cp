#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,l,r,k;
        cin >> n >> l >> r >> k;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        sort(all(a));

        int cost = 0;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i] >= l && a[i] <= r){
                cost += a[i];
                if(cost <= k){
                    cnt++;
                }
                else{
                    break;
                }
            }
            
        }

        cout << cnt << "\n";
    }
    return 0;
}