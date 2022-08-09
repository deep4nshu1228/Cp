#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(auto &it: a) cin >> it;
    sort(all(a));

    // int dif = 5 - k;
    // int ans = 0;
    // if(a.size()<2) {cout << ans;}
    // else{
    //     for(int i=0; i<a.size(); i+=3){
    //         if(i<a.size()-2){
    //             if(a[i] <= dif && a[i+2] <=dif){ ans++; }
    //         }
    //     }
    //     cout << ans << "\n";
    // }

    /*
    *  count student who are (5-a[i] >= k) then divde them by 3
    */

    int count = 0;
    for(int i = 0; i < a.size(); i++){
        if(5-a[i]>=k){count++;}
    }
    cout << count/3 << "\n";
    return 0;
}