#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        ll x = 0;
        ll i = 1;
        int cnt = 0;
        while(x <= n){
            if(x > 2){
                cnt++;
            }
            x = pow(2,i);
            i++;
        }

        cout << n - (cnt+2) << "\n";
    }
    return 0;
}