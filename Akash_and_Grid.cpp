#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int xc,yc;
        xc = n/2 + 1;
        yc = n/2 + 1;

        if( (abs(x-xc) % 2 == 0 && abs(y-yc) % 2 == 0) || (abs(x-xc) % 2 != 0 && abs(y-yc) % 2 != 0) ){
            cout << 0 << "\n";
        }
        else{
            cout << 1 << "\n";
        }
    }
    return 0;
}