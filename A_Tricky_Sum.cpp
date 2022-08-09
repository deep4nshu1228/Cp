#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        ll sum = ( n*(n+1) )/2;

        int x = 0;
        int y = 1, i = 1;
        while(y <= n){
            x += y;
            y = (1<<i);
            i++;
        }

        cout << sum - 2*x << "\n";
    }
    return 0;
}