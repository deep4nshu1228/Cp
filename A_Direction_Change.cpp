#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m;
        cin >> n >> m;

        if(n==1 || m==1){
            if(abs(n-m)>1){
                cout << "-1\n";
                continue;
            }
            // else if(n-1 == 1 || m-1 == 1){
            //     cout << "1\n";
            //     continue;
            // }
        }

        int ans = 0;

        ans += (min(n,m) - 2)*2 + 2;

        ans += (max(n,m) - min(n,m) - 1)*2 + 2;

        if( (n+m)%2 != 0)
            cout << ans-1 << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}