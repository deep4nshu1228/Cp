#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        vector<int> a(2*n);
        for(auto &it: a) cin >> it;
        
        sort(all(a));
        
        for(int i=0; i<n; i++){
            cout << a[i] << " " << a[i+n] << " ";
        }
        cout << endl;
    }
    return 0;
}