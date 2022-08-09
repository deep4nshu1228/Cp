#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        bool ans = true;
        int x = a[0]%2;

        for(int i=1; i<n; i++){
            if(a[i]%2 != x){
                ans = false;
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}