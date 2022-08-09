#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if(l1 != r2){
            cout << l1 << " " << r2 << "\n";
        }
        else{
            cout << l1 << " " << l2 << "\n";
        }
    }
    return 0;
}