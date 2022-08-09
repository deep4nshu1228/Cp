#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int l,r;
        cin >> l >> r;

        if(r < 2*l){
            cout << "-1 -1\n";
        }
        else{
            cout << l << " " << 2*l << "\n";
        }
    }
    return 0;
}