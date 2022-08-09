#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int total = 0, max_sum = 0;
        for(int i=0; i<n; i++){
            total += a[i];
            max_sum += (a[i] + k - 1)/k;
        }

        cout << (total + k - 1)/k << " " << max_sum << "\n";
    }
    return 0;
}