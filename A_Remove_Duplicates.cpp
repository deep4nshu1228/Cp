#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int m = *max_element(all(a))+1;
    vector<int> cnt(m);
    for(int i=0; i<m; i++){
        cnt[i] = 0;
    }

    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }

    int total_non_duplicate = 0;

    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        if(cnt[a[i]] > 0){
            ans.push_back(a[i]);
            cnt[a[i]] = 0;
        }
    }
    cout << ans.size() << "\n";
    for(int i=ans.size()-1; i>=0; i--){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}