#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll u,v;
        cin >> u >> v;

        cout << -(u*u) << " " << (v*v) << "\n";
    }
    return 0;
}