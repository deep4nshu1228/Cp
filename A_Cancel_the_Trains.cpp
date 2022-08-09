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

        vector<int> b(m);
        for(auto &it: b) cin >> it;

        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i] == b[j]){
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";

    }
    return 0;
}