#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
	    cin >> a[i];
	}
	if (k > 1) {
	    int res = 0;
	    for (int i = 1; i < n - 1; i++) {
	        res += (a[i] > a[i - 1] + a[i + 1]);
	    }
	    cout << res << '\n';
	}
	else {
	    cout << (n - 1) / 2 << '\n';
	}
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}