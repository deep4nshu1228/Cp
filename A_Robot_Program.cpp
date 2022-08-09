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

        if(x == y){
            cout << 2*x << "\n";
        }
        else{
            cout << 2*max(x,y) - 1 << "\n";
        }
    }

    return 0;
}