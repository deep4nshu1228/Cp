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

        int s = 0;
        for(int i=0; i<n; i++){
            s += a[i];
        }

        if(s == m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}