#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll x,y;
        cin >> x >> y;

        if(y%x == 0){
            cout << (y/x) - 1 << "\n";
        }
        else{
            cout << y/x << "\n";
        }
    }
    return 0;
}