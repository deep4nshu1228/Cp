#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,a;
    cin >> n >> m >> a;

    ll count_horizontal = (n%a == 0 ? n/a : n/a + 1);
    ll count_vertical = (m%a == 0 ? m/a : m/a + 1);
    cout << count_horizontal * count_vertical << "\n";
    return 0;
}