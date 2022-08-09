#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m;
        cin >> n >> m;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        sort(all(a));

        ll cnt = a[n-1]*2 + 1;
        for(int i=n-2; i>0; i--){
            cnt += 1 + a[i];
        }

        cnt += 1;
        if(cnt <= m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}