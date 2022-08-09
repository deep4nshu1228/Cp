#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        ll sum = 0;
        vector<int> a(n);
        for(auto &it: a){
            cin >> it;
        }

        if(n == 1){
            if(a[0] == 1) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }

        sort(all(a));
        if(a[n-1] > a[n-2] + 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}