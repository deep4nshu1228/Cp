#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll x1,p1,x2,p2;
        cin >> x1 >> p1 >> x2 >> p2;

        ll mn = min(p1,p2);

        p1 -= mn;
        p2 -= mn;

        if(p1 > 7){
            cout << ">\n";
        }
        else if(p2 > 7){
            cout << "<\n";
        }
        else{
            for(int i=0; i<p1; i++) x1 *= 10;
            for(int j=0; j<p2; j++) x2 *= 10;

            if(x1 > x2) cout << ">\n";
            else if(x2 > x1) cout << "<\n";
            else cout << "=\n";
        }

    }
    return 0;
}