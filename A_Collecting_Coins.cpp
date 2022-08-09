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
        int n;
        cin >> n;

        sort(all(a));

        n -= 2*a[2] - a[1] - a[0];

        if(n < 0 || n%3 != 0 ){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}