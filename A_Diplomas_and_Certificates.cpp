#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int main()
{
    ll x,y;
	cin>>x>>y;
	ll a=0,b=0,m=x/2,n;
	ll r=x-a-b;
	a=(x/2)/(y+1);
	b=y*a;
	r=x-a-b;
	cout<<a<<" "<<b<<" "<<r;
    return 0;
}