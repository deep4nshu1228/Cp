#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        vector<int> a(3);
        for(auto &it: a) cin >> it;

        sort(all(a));

        if(a[2] == a[1] + a[0]){
            cout << "YES\n";
        }
        else if(a[0] == a[1] && a[2]%2 == 0){
            cout << "YES\n";
        }
        else if(a[1] == a[2] && a[0]%2 == 0){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
