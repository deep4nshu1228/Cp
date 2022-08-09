#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,x; cin >> n >> x;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        vector<int> b(n);
        for(int i=0; i<n; i++){
            x += a[i];
            if(x < 0) x = 0;
            b[i] = x;
        }
        cout << *max_element(all(b)) << "\n";
    }
    return 0;
}