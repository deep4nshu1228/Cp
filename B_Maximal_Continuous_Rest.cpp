#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int ans = 0;
    // if(a[0] == 1 && a[n-1] == 1){
    //     int j = 0, k = n-1;
    //     int cnt = 0;
    //     while(a[j] == 1 && j<n){
    //         cnt++;
    //         j++;
    //     }
    //     while(a[k] == 1 && k>=0){
    //         cnt++;
    //         k--;
    //     }
    //     ans = max(cnt,ans);
    //     for(int i=j; i<k; i++){
    //         cnt = 0;
    //         if(a[i] == 1){
    //             while(a[i] == 1 && j<n){
    //                 cnt++;
    //                 i++;
    //             }
    //             i--;
    //         }
    //         ans = max(cnt,ans);
    //     }
    // }
    // else{
    //     for(int i=0; i<n; i++){
    //         int cnt = 0;
    //         if(a[i] == 1){
    //             while(a[i] == 1 && i<n){
    //                 cnt++;
    //                 i++;
    //             }
    //             i--;
    //         }
    //         ans = max(cnt,ans);
    //     }
    // }

    int len = 0;
    for(int i=0; i<2*n; i++){
        if(a[i%n] == 1){
            len++;
            ans = max(ans,len);
        }
        else
            len = 0;
    }
    cout << ans << "\n";
    return 0;
}