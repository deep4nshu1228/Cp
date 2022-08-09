#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll r,b,d;
        cin >> r >> b >> d;
        
        if(r>b){
            swap(r,b);
        }

        if(r*(d+1) < b){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}

