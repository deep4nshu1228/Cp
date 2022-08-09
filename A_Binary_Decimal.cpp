#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        int mx = 0;
        while(n > 0){
            int x = n%10;
            mx = max(mx,x);
            n /= 10;
        }

        cout << mx << "\n";
    }
    return 0;
}