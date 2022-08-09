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

        if(!is_sorted(all(a))){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}