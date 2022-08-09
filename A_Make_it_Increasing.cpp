#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n; cin >> n;

    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    
    ll ans = INT_MAX;
    for(int i=1; i<=n; i++){
        ll prev = 0, sum = 0;
        for(int j=i-1; j>=1; j--){
            prev += a[i] - prev%a[i];
            sum += prev/a[i];
        }
        prev = 0;
        for(int k=i+1; k<=n; k++){
            prev += a[i] - prev%a[i];
            sum += prev/a[i];
        }
        ans = min(ans,sum);
    }
 
    cout << ans << "\n";
    return 0;
}

// #include <bits/stdc++.h>
 
// using namespace std;
// long long n, a[5005], ans=1e18;
// int main()
// {
//     cin >> n;
//     for (int i=1; i<=n; i++) {
//         cin >> a[i];
//     }
//     for (int pos=1; pos<=n; pos++) {
//         long long prev=0, sum=0;
//         for (int i=pos-1; i>=1; i--) {
//             prev+=a[i]-prev%a[i];
//             sum+=prev/a[i];
//         }
//         prev=0;
//         for (int i=pos+1; i<=n; i++) {
//             prev+=a[i]-prev%a[i];
//             sum+=prev/a[i];
//         }
//         ans=min(ans, sum);
//     }
//     cout << ans << "\n";
//     return 0;
// }