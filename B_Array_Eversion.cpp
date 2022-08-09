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
        
        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(a[i]);
        }

        if(s.size() == 1){
            cout << "0\n";
            continue;
        }

        int mx = *max_element(all(a));
        if(a[n-1] == mx){
            cout << "0\n";
            continue;
        }

        int ans = 0;
        int check = a[n-1];
        for(int i=n-2; i>=0; i--){
            if(a[i] > check){
                check = a[i];
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}