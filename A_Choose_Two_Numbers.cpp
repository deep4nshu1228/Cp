#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int m; cin >> m;
    vector<int> b(m);
    for(auto &it: b) cin >> it;

    sort(all(a));
    sort(all(b));

    cout << a[n-1] << " " << b[m-1] << "\n";
    return 0;
}