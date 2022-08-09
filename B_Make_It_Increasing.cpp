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

        int ans = 0;
        for(int i=n-2; i>=0; i--){
            while(a[i] >= a[i+1] && a[i] > 0){
                a[i] /= 2;
                ans++;
            }
            if(a[i] == a[i+1]){
                ans = -1;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}