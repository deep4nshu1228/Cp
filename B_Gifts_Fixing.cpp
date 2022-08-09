#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &it: a) cin >> it;
        vector<ll> b(n);
        for(auto &it: b) cin >> it;

        ll min_a = *min_element(all(a));
        ll min_b = *min_element(all(b));

        // ll count = 0;
        // for (ll i = 0; i < a.size(); i++)
        // {
        //     if(a[i] == min_a || b[i] == min_b){
        //         continue;
        //     }
        //     else{
        //         ll x = a[i]-min_a < b[i]-min_b ?  a[i]-min_a : b[i]-min_b;
        //         count = count + x;
        //         a[i] = a[i] - x;
        //         b[i] = b[i] - x;
        //     }
        // }

        // for(ll i = 0; i < a.size(); i++){
        //     count = count + (a[i] - min_a);
        //     count = count + (b[i] - min_b);
        // }

        /*  if we do max(a[i] - min_a, b[i] - min_b) */
        ll count = 0;
        for(int i = 0; i < n; i++){
            count += max(a[i]-min_a, b[i]-min_b);
        }
        cout << count << "\n";
        
    }
    return 0;
}