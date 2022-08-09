#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a, b, c; cin>>a>>b>>c;
	int n; cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int x; cin>>x;
		if(x>b&&x<c) ans++;
	}
	cout<<ans<<'\n';
}
int main()
{
    solve();
    return 0;
}