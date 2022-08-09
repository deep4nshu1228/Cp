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

        ll m;
        if(b == 2){
            m = 6;
        }
        else{
            m = b;
        }

        if(b == 1){
            cout << "NO";
            continue;
        }
        cout << "YES\n";
        cout << a << " " << a*(m-1) << " " << a*m << "\n";
    }
    return 0;
}