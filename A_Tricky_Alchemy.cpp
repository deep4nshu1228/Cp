#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
ll max(ll a, ll b){
    if(a > b)
        return a;
    return b;
}
int main()
{
    ll a,b;
    cin >> a >> b;

    ll x,y,z;
    cin >> x >> y >> z;

    ll yellow = 2*x + y;
    ll blue = y + 3*z;

    cout << max(0, yellow-a) + max(0,blue-b) << "\n";
    return 0;
}