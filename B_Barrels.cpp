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

        sort(all(a));

        int i = n-2;
        while(k--){
            a[n-1] += a[i];
            i--;
            if(a[i] == 0 || i < 0) break;
        }

        cout << a[n-1] << "\n";
    }
    return 0;
}