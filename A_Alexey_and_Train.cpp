#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
		}
		vector<int> tm(n);
		for (int i = 0; i < n; i++) {
			cin >> tm[i];
		}
		int prev = 0;
		int total_time = 0;
		for (int i = 0; i < n; i++) {
			total_time += (a[i] - prev + tm[i]);
			int staying_time = (b[i] - a[i] + 1) / 2;
			if (i < n - 1) {
				total_time += staying_time;
			}
			if (total_time < b[i] && i < n - 1) {
				total_time = b[i];
			}
			prev = b[i];
		}
		cout << total_time << '\n';
	}
	return 0;
}