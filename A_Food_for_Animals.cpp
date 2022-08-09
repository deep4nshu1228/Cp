#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;

        int rem_x = max(0,x-a);
        int rem_y = max(0,y-b);

        if(rem_x+rem_y <= c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}