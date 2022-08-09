#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n, c; cin >> n >> c;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(all(a));
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(i == 0) cnt++;
		else
		{
			if(a[i] - a[i - 1] <= c) cnt++;
			else cnt = 1;
		}
	}
	cout << cnt;
    return 0;
}