// #include <bits/stdc++.h>
// #define all(n) (n).begin(), (n).end()
// using namespace std;
// typedef long long int ll;
// int main()
// {
// 	int tests; cin >> tests;
// 	while(tests--){
// 		string s; cin >> s;
// 		vector<int> a;
// 		for(int i=0; i<s.size(); i++){
// 			if(s[i] == '1'){
// 				int j = i;
// 				while(j+1 < s.size() && s[j+1] == '1'){
// 					j++;
// 				}
// 				a.push_back(j - i + 1);
// 				i = j;
// 			}
// 		}

// 		sort(all(a));
// 		int ans = 0;
// 		for(int i=0; i<a.size(); i+=2){
// 			ans += a[i];
// 		}
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>

using namespace std;

#define sz(a) int((a).size())
#define forn(i, n) for (int i = 0; i < int(n); ++i)

void solve() {
	string s;
	cin >> s;
	vector<int> a;
	forn(i, sz(s)) if (s[i] == '1') {
		int j = i;
		while (j + 1 < sz(s) && s[j + 1] == '1')
			++j;
		a.push_back(j - i + 1);
		i = j;
	}
	sort(a.rbegin(), a.rend());
	int ans = 0;
	for (int i = 0; i < sz(a); i += 2)
		ans += a[i];
	cout << ans << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) solve();
}