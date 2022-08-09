#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m; cin >> n >> m;

    int ans;
    if(n%2 == 0) ans = n/2;
    else ans = n/2 + 1;

    if(ans%m == 0){
        cout << ans << "\n";
    }
    else{
        while(ans%m != 0){
            ans += 1;
            if(ans > n){
                ans = -1;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}