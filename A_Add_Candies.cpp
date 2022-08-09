#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 2){
            cout<<1<<endl;
            cout<<2<<endl;
            continue;
        }
        else{
            cout<<n<<endl;
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}