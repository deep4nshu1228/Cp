#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    sort(all(a));
    int x = count(all(a), a[0]);
    int y = count(all(a), a[n-1]);

    if(a[0] == a[n-1])
        cout << "0\n";
    else
        cout << n - (x+y) << "\n";
    return 0;
}