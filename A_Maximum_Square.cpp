#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    int ans;
    ans=1;
        cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            ans=max(ans,min(a[i],n-i));
        }
        cout<<ans<<endl;
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}