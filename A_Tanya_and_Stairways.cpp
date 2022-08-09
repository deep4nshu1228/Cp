#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<int> ans;

    for(int i=0; i<n; i++){
        if(a[i] == 1){
            i++;
            while(a[i] != 1 && i<n){
                i++;
            }
            i--;
        }
        ans.push_back(a[i]);
    }

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}