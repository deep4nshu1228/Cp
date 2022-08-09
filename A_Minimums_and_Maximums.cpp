#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if(r1 < l2){
            cout << l1+l2 << "\n";
        }
        else if(r1 == l2){
            cout << l2 << "\n";
        }
        else if(r2 < l1){
            cout << l1+l2 << "\n";
        }
        else{
            cout << max(l1,l2) << "\n";
        }
    }
    return 0;
}