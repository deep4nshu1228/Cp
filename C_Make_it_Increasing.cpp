#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        vector<int> b(n,0);
        int cnt = 0;
        for(int j=i-1; j>=0; j--){
            if(j == i-1){
                b[j] -= a[j];
                cnt++;
            }
            else{
                if(abs(b[j+1])%a[j] == 0){
                    b[j] -= b[j+1]-a[j];
                    cnt += abs(b[j+1])/a[j] + 1;
                }
                else{
                    b[j] -= ((abs(b[j+1])+a[j]-1)/a[j])*a[j];
                    cnt += (abs(b[j+1])+a[j]-1)/a[j];
                }
            }
        }
        for(int k=i+1; k<n; k++){
            if(k == i+1){
                b[k] += a[k];
                cnt++;
            }
            else{
                if(b[k-1]%a[k] == 0){
                    b[k] = b[k-1] + a[k];
                    cnt += b[k-1]/a[k] + 1;
                }
                else{
                    b[k] = ((b[k-1]+a[k]-1)/a[k])*a[k];
                    cnt += (b[k-1]+a[k]-1)/a[k];
                }
            }
        }
        ans = min(ans,cnt);
    }

    cout << ans << "\n";
    return 0;
}