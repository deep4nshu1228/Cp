#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        int ans = 0;
        if(n < 1400)
            ans = 4;
        else if(n < 1600)
            ans = 3;
        else if(n < 1900)
            ans = 2;
        else
            ans = 1;

        cout << "Division " << ans << "\n";
    }
    return 0;
}