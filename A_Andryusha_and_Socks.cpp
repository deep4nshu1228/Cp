#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
	cin >> n;
	int a[2*n];
	map<int, int> mp;
	for(int i=0; i<2*n; ++i) {
		cin >> a[i];
		mp[a[i]]=0;
	}
	int cnt=0, mx=0;
	for(int i=0; i<2*n; ++i) {
		if(mp[a[i]]==0) {
			cnt++;
			mp[a[i]]++;
		} else {
			cnt--;
			if(mp[a[i]]>0)
				mp[a[i]]--;
			else
				mp[a[i]]=0;
		}
		mx=max(mx, cnt);
	}
	cout << mx << "\n";
}
int main()
{
    solve();
    return 0;
}