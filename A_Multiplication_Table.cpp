#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n,x;
    cin >> n >> x;

    ll cnt=0;
    for(int i=1; i<=n; i++){
        if(x%i == 0 && x/i <= n){
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}