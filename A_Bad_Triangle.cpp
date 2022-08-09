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

        if(a[0] + a[1] > a[n-1]){
            cout << -1 << "\n";
        }
        else{
            cout << "1 2 " << n << "\n";
        }
    }
    return 0;
}