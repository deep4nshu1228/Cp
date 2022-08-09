#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,k,t;
    cin>>n>>k>>t;
    if(t<=k){
    cout<<t<<"\n";
    }
    else if(k<=t and t<=n){
        cout<<k<<"\n";
    }
    else if(n<=t and n+k>t){
        cout<<(n+k) - t<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}