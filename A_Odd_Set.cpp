#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(2*n);
        for(auto &it: a) cin >> it;

        int odd_num = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i]%2 != 0){
                odd_num++;
            }
        }

        string ans = "No";
        if(odd_num == n){
            ans = "Yes";
        }

        cout << ans << "\n";

    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,cnt[2]={0};
// 		cin>>n;
// 		for(int i=1,x;i<=n*2;i++)cin>>x,cnt[x%2]++;
// 		if(cnt[0]==n)puts("Yes");
// 		else puts("No");
// 	}
// 	return 0;
// }