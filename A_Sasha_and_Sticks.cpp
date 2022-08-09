#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k;
    cin >> n >> k;

    ll x = n/k;

    if(x&1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}