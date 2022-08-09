#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i=1; i<=n; i++){
            int k;
            cin >> k;

            ans = max(ans, k - i);
        }
        cout << ans << "\n";
    }

    return 0;
}