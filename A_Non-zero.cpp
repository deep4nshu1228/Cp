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

        int zeros = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0){
                zeros++;
                a[i]++;
            }
        }
        int ans = zeros;

        int sum=0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }

        if(sum == 0){ ans++; }

        cout << ans << "\n";
    }
    return 0;
}