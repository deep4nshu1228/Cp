#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(auto &it: a) cin >> it;

        int max = *max_element(all(a));
        int min = *min_element(all(a));

        cout << max - min << "\n";

    }
    return 0;
}