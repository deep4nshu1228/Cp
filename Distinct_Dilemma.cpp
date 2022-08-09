#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        ll sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        
        int cnt = 0;
        int i = 1;
        int x = 2;
        while(i <= sum){
            cnt++;
            i+=x;
            x++;
        }

        cout << cnt << "\n";
    }
    return 0;
}