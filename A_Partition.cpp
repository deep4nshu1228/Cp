#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    // vector<int> b,c;

    // for(int i=0; i<n; i++){
    //     if(a[i] < 0){
    //         c.push_back(a[i]);
    //     }
    //     else{
    //         b.push_back(a[i]);
    //     }
    // }

    // int x = 0, y = 0;
    // for(int i=0; i<b.size(); i++){
    //     x += b[i];
    // }
    // for(int i=0; i<c.size(); i++){
    //     y += c[i];
    // }

    // cout << (x-y) << "\n";
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += abs(a[i]);
    }
    cout << ans << "\n";
    return 0;
}