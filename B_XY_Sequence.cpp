#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n,B,x,y;
        cin >> n >> B >> x >> y;
        
        vector<ll> ans;
        ans.push_back(0);

        for(int i=1; i<=n; i++){
            if(ans[i-1]+x <= B){
                ans.push_back(ans[i-1]+x);
            }
            else{
                ans.push_back(ans[i-1]-y);
            }
        }

        ll sum = 0;
        for(int i=0; i<n+1; i++){
            sum += ans[i];
        }

        cout << sum << "\n";
    }
    return 0;
}