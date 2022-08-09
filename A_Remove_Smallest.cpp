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
        vector<int> a;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            a.push_back(x);
        }
        sort(all(a));
        string ans = "YES";
        for(int i = 1; i < a.size(); i++){
            if(a[i] - a[i-1] > 1){
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}