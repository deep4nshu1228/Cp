#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll i,j,k;
    ll n,m;

    cin>>n;

    for(i=n/2;i>0;i--)
    {
        k=n-i;

        if(__gcd(k,i)==1)
        {
            cout<<i<<" "<<k<<endl;
            break;
        }
    }
}
int main()
{
    solve();
    return 0;
}