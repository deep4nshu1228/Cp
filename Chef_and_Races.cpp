#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x,y,a,b;
        cin >> x >> y >> a >> b;

        int ans = 2;
        if(x == a || x == b){
            ans--;
        }
        if(y == a || y == b){
            ans--;
        }

        cout << ans << "\n";
    }
    return 0;
}