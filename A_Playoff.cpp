#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        ll cnt = 1 << n;
        
        cout << cnt - 1 << "\n";
    }
    return 0;
}