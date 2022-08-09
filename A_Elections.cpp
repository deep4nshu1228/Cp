#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
	int n; cin >> n;
	int sum = 0;
	int mx=0;
	vector<int> a(n);
	for(auto &it: a){
		cin >> it;
		mx = max(mx,it);
		sum += it;
	}

	sum = 2*sum;
	sum += n;
	sum /= n;
	cout << max(mx,sum) << "\n";
}
int main()
{
	solve();
	return 0;
}