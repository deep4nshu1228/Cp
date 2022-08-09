#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    set<int> x;
    for(int i=0; i<n; i++){
        x.insert(a[i]);
    }

    if(x.size() < k){
        cout << "NO\n";
    }
    else{
        sort(all(a));
        int r=1;
        cout << 1 << " ";
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]  && r<k){
                cout << i+1 << " ";
                r++;
            }
        }
        cout << "\n";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {	
// 	int n, k;
// 	cin >> n >> k;
// 	set<int> el;
// 	vector<int> ans;
// 	for (int i = 0; i < n; ++i) {
// 		int x;
// 		cin >> x;
// 		if (!el.count(x)) {
// 			ans.push_back(i);
// 			el.insert(x);
// 		}
// 	}
	
// 	if (int(ans.size()) < k) {
// 		cout << "NO\n";
// 	} else {
// 		cout << "YES\n";
// 		for (int i = 0; i < k; ++i)
// 			cout << ans[i] + 1 << " ";
// 		cout << endl;
// 	}
	
// 	return 0;
// }