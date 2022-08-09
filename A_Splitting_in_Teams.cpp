#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
	cin>>n;
	int x[n];
	int i,cnt1=0,cnt2=0,ans;
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
		x[i] == 1 ? cnt1++:cnt2++;
	}
	if(cnt2==0)
	{
		cout<<cnt1/3;
		return 0;
	}
	if(cnt2<cnt1)
	{
		ans = cnt1-cnt2;
		ans = ans/3;
		cout<<ans+min(cnt1,cnt2);
		return 0;
	}
	cout<<min(cnt2,cnt1);
	return 0;
}