#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m,r;
    cin >> n >> m >> r;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<int> b(m);
    for(auto &it: b) cin >> it;

    int x = *min_element(all(a));
    int y = *max_element(all(b));

    if(x >= y)
        cout << r << "\n";
    else
        cout << (r/x)*(y) + (r%x) << "\n";
}
int main()
{
    solve();
    return 0;
}