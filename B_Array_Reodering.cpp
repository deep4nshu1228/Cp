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

        vector<int> b;
        for(int i=0; i<n; i++){
            if(a[i]%2 == 0){
                b.push_back(a[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]%2 != 0){
                b.push_back(a[i]);
            }
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(b[i],2*b[j]) > 1) ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}