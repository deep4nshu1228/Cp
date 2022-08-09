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
        if(a[0] != 1){
            if(a[n-1] != n && a[n-1] == 1){
                ans = 3;
            }
            else if(a[n-1] != n){
                ans = 2;
            }
            else{
                ans = 1;
            }
        }
        else{
            for(int i=1; i<n; i++){
                if(a[i] != i+1){
                    ans = 1;
                }
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}