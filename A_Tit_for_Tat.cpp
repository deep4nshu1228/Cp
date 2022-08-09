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

        for(int i=0; i<n-1; i++){
            if(a[i] < k){
                k -= a[i];
                a[n-1] += a[i];
                a[i] = 0;
            }
            else{
                a[i] -= k;
                a[n-1] += k;
                k = 0;
            }

            if(k == 0) break;
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}