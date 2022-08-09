#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        cout << max(6LL, (n+1))/2 * 5 << "\n";
    }
    return 0;
}