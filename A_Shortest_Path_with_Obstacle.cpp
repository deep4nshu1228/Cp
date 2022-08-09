#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x1,y1;
        cin >> x1 >> y1;

        int x2,y2;
        cin >> x2 >> y2;

        int f1,f2;
        cin >> f1 >> f2;

        int ans = abs(x2-x1) + abs(y2-y1);

        if( (x1 == x2 && x1 == f1 && min(y1,y2) < f2 && max(y1,y2) > f2) 
        || (y1 == y2 && y1 == f2 && min(x1,x2) < f1 && max(x1,x2) > f1) ){
            ans += 2;
        }

        cout << ans << "\n";
    }
    return 0;
}