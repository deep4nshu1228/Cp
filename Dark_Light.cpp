#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k;
        cin >> n >> k;

        string ans;
        if(k == 0){
            if(n%4 == 0)
                ans = "Off";
            else
                ans = "On";
        }
        else{
            if(n == 0)
                ans = "On";
            else
                ans = "Ambiguous";
        }

        cout << ans << "\n";
    }
    return 0;
}