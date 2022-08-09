#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &it: a){
            cin >> it;
        }

        int x = 0;
        for(int i=0; i<n-1; i++){
            x+=a[i+1]-a[i]-1;
        }

        if(x > 2){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }

        // if(n==1){
        //     cout << "YES\n";
        //     continue;
        // }
        // else if(n==2){
        //     if(a[1]-a[0] > 3)
        //         cout << "NO\n";
        //     else
        //         cout << "YES\n";
        //     continue;
        // }

        // if(a[1]-a[0] > 3){
        //     cout << "NO\n";
        //     continue;
        // }
        // else if(a[1]-a[0] == 3){
        //     a[1]--;
        //     a[0]++;
        // }
        // else if(a[1]-a[0]==2){
        //     if(a[2]-a[1]>1){
        //         a[0]++;
        //     }
        //     else{
        //         a[1]--;
        //     }
        // }
        
        // string ans = "YES";
        // for(int i=1; i<n-1; i++){
        //     if(a[i+1]-a[i] > 2){
        //         ans = "NO";
        //         break;
        //     }
        //     else{
        //         if(a[i+1]-a[i] > 2){
        //             a[i+1]--;
        //             a[i]++;
        //         }
        //         else if(a[i]-a[i-1]>1){
        //             a[i+1]--;
        //         }
        //     }
        // }

        // if(a[n-1]-a[n-2] > 2){
        //     cout << "NO\n";
        //     continue;
        // }
        // else if(a[n-1]-a[n-2]==2){
        //     a[n-1]--;
        // }

        // cout << ans << "\n";
    }
    return 0;
}