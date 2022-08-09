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

        bool one = true;
        for(int i=1; i<n; i++){
            if(a[i] - a[i-1] == 1){
                one = false;
                break;
            }
        }

        if(one) cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}