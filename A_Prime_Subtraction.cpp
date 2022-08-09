#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n,m;
        cin >> n >> m;

        ll diff  = n - m;
        if(diff == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}