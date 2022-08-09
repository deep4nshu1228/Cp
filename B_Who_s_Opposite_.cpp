#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int n = 2 * abs(a - b);
        if(a > n || b > n || c > n){
            cout << -1 << "\n";
            continue;
        }

        int d1 = c + (n/2);
        int d2 = c - (n/2);

        if(d1 <= n && d1 > 0){
            cout << d1 << "\n";
        }
        else{
            cout << d2 << "\n";
        }
    }
    return 0;
}