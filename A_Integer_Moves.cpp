#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x,y;
        cin >> x >> y;

        if(x == 0 && y == 0){
            cout << "0\n";
            continue;
        }
        int sq = (x*x) + (y*y);

        int i=0;
        bool sqr = false;
        while(i*i <= sq){
            if(i*i == sq){
                sqr = true;
                break;
            }
            i++;
        }

        if(sqr) cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}