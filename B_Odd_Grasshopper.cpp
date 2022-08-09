#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll x,n; cin >> x >> n;

        ll d;
        if(n%4 == 1) d = -n;
        else if(n%4 == 2) d = 1;
        else if(n%4 == 3) d = n+1;
        else d = 0;
        if(x%2 == 0){
            cout << x+d << "\n";
        }
        else{
            cout << x-d << "\n";
        }
    }
    return 0;
}