#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        if(k > 2){
            k = 2 + k%2;
        }

        while(k--){
            int mx = *max_element(all(a));
            for(int i=0; i<n; i++){
                a[i] = mx - a[i];
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}