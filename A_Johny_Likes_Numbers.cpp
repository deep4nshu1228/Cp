#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    long n,k;
    cin >> n >> k;
    ll x;
    if(n%k != 0)
        x = (n+k-1)/k;
    else
        x = n/k + 1;

    cout << k*x << "\n";
}
int main()
{
    solve();
    return 0;
}