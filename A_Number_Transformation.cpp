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

        if(y < x || y%x != 0){
            cout << "0 0\n";
            continue;
        }
        else{
            int k = y/x;
            cout << 1 << " " << k << "\n";
        }
    }
    return 0;
}