#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        vector<int> a(7);
        for(auto &it: a) cin >> it;

        cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << "\n";
    }
    return 0;
}
