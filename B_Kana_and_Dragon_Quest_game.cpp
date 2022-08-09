#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int x,n,m;
        cin >> x >> n >> m;
        // if(x <= 10 && m > 0){
        //     cout << "YES\n";
        //     continue;
        // }
        // while(n-- && x>0){
        //     x = x/2 + 10;
        // }
        // while(m-- && x>0){
        //     x = x - 10;
        // }
        // if(x>0){
        //     cout << "NO\n";
        // }
        // else{
        //     cout << "YES\n";
        // }

        while(n-- && x > 0 && x/2 + 10 < x){
            x = x/2 + 10;
        }
        if(x <= m * 10) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}