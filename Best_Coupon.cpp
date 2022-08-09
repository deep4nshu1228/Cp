#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n/10 > 100)
            cout << n/10 << "\n";
        else
            cout << 100 << "\n";
    }
    return 0;
}