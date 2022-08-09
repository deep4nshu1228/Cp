#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    int a = 0, b = 0, c = 0;
    while(t--){
        vector<int> v(3);
        for(auto &it: v) cin >> it;

        a += v[0];
        b += v[1];
        c += v[2];
    }

    if( a == b && b == c && a == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}