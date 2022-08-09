#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll l , r , a,ans=0;
    cin>>l>>r>>a;
    if(l<r){
        ll temp=r-l;
        ll t=l;
        l+=min(temp,a);
        a-=(l-t);
        if(l<r)
            r=l;
        ans=l+r+a-(a%2);
    }
    else if(r<l){
        swap(l,r);
        ll temp=r-l;
        ll t=l;
        l+=min(temp,a);
        a-=(l-t);
        if(l<r)
            r=l;
        ans=l+r+a-(a%2);
    }
    else {
        ans=l+r+a-(a%2);
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}