#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        
        map<int,int> m;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            m[x]++;
        }

        vector<int> ans;
        for(int k=1; k<=n; k++){
            if(k<=m.size()){
                ans.push_back(m.size());
            }
            else{
                int x = ans[ans.size()-1];
                ans.push_back(x+1);
            }
        }

        for(auto &it: ans){
            cout << it << " ";
        }
        cout << "\n";
        
    }
    return 0;
}
