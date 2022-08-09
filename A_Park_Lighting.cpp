#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;

        int ans = (n*m + 1)/2;
        cout << ans << "\n";
    }
    return 0;
}