#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        int x = (n-2)%4;

        if(x == 0 || x == 1)
            cout << "3\n";
        else if(x == 2)
            cout << n+3 << "\n";
        else 
            cout << n << "\n";
    }
    return 0;
}