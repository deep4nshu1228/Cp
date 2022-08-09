#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int min = INT_MAX;
    for(int i = 0; i <= a.size() - n ; i++){
        if( (a[i+n-1] - a[i]) < min) { min = a[i+n-1] - a[i]; }
    }

    cout << min << "\n";
    return 0;
}