#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll k,n,w; cin>>k>>n>>w;
    ll total_cost = ((w*(w+1))/2)*k;
    ll borrow = total_cost - n;
    if(borrow > 0) cout<<borrow<<"\n";
    else cout<<"0\n";
    return 0;
}