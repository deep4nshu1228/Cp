#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n,m,t;
        cin >> n >> m >> t;
        t--;
        int column = t/n;
        int row = t%n;

        cout << row*m + column + 1 << "\n";
    }
    return 0;
}