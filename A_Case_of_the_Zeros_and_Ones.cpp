#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int one = count(all(s), '1');
    int zero = count(all(s), '0');

    // int ans = max(one,zero) - min(one,zero);
    /*
    *    ans can be = one + zero - 2 * min(one,zero);
    *    or abs(one - zero);
    */

    // cout << ans << "\n";

    cout << abs(one - zero) << "\n";
    return 0;
}