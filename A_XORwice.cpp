#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll a,b;
        cin >> a >> b;

        ll mn = min(a,b);

        int i=1;
        ll x = 0;
        while( (1<<i) <= mn){
            i++;
            x = 1<<i;
        }

        cout << (a^b) << "\n";
    }
    return 0;
}