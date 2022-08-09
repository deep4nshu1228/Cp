#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &it: a) cin >> it;

        ll expected_sum = 0;
        ll real_sum = 0;
        bool yes = true;
        for(int i=0; i<n; i++){
            expected_sum += i;
            real_sum += a[i];
            if(real_sum < expected_sum){
                cout << "NO\n";
                yes = false;
                break;
            }   
        }

        if(yes) cout << "YES\n";
    }
    return 0;
}