#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string ans = "NO";
        for(ll i = 3; i*i <= n; i+=2){
            if(n%i == 0){
                ans = "YES";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}