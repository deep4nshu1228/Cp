#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int x = max( max(a + b*c , a*b + c), max((a+b)*c , a*(b+c)));
    int ans = max(x, max(a*b*c, a+b+c));

    cout << ans << "\n";
    return 0;
}