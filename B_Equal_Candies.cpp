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

        sort(all(a));

        int cnt = 0;
        for(int i=1; i<n; i++){
            cnt += (a[i]-a[0]);
        }

        cout << cnt << "\n";
    }
    return 0;
}