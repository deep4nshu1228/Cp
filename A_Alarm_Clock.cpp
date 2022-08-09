#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        if(d >= c && a > b){
            cout << "-1\n";
            continue;
        }

        if(a <= b){
            cout << b << "\n";
            continue;
        }

        ll div = (a-b)/(c-d);
        if((a-b)%(c-d) != 0) div++;
        cout << b + div*c << "\n";
    }
    return 0;
}