// #include <bits/stdc++.h>
 
// using namespace std;
 
// int n,m;
 
// void solve(){
// 	cin >> n >> m;
// 	int ans = 0;
// 	for(int i = 1;i <= n;i++){
// 		for(int j = 1;j <= m;j++){
// 			char o;cin >> o;
// 			if(o == 'C')continue;
// 			if(i == n and o == 'D')ans++;
// 			if(j == m and o == 'R')ans++;
// 		}
// 	}
// 	cout << ans << endl;
// }
 
// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int t;cin >> t;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m;
        cin >> n >> m;

        int ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                char x; cin >> x;

                if(x == 'C') continue;
                if(i == n && x == 'D'){
                    ans++;
                }
                if(j == m && x == 'R'){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
