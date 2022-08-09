#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n,k; cin >> n >> k;
        vector<ll> a(k);
        for(auto &it: a) cin >> it;

        ll x = 0;
        for(ll i=0; i<k; i++){
            int j = a[i];
            while(j > x){
                cout << j << " ";
                j--;
            }
            x = a[i];
        }
        cout << "\n";
    }
    return 0;
}