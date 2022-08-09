#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    cin >> n >> m;

    ll x;
    bool ok = true;
    for(int i=1; i<=n; i++){
        x = (1<<i);
        if(x > m){
            ok = false;
            break;
        }
    }

    if(ok)
        cout << m%x << "\n";
    else
        cout << m << "\n";
    return 0;
}