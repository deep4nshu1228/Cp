#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n; cin >> n;

    int rem = n%10;
    if(rem <= 5)
        cout << n - rem << "\n";
    else
        cout << n + (10 - rem) << "\n";
    return 0;
}