#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        if(n%2 == 0){
            cout << n/2 << "\n";
        }
        else{
            cout << (n+1)/2 - (n+1) << "\n";
        }
    }
    return 0;
}