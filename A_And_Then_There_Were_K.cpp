#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        ll p=0;
        while(n != 0){
            p++;
            n /= 2;
        }
        cout << (1<<(p-1)) - 1 << "\n";
    }
    return 0;
}