#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
        int n,m;
        cin >> n >> m;

        vector<pair<string,string>> a;

        for(int i=0; i<m; i++){
            string x,y;
            cin >> x >> y;

            a.push_back(make_pair(x,y));
        }

        vector<string> b;
        for(int i=0; i<n; i++){
            string x;
            cin >> x;

            b.push_back(x);
        }

        vector<string> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(b[i] == a[j].first){
                    if(a[j].first.size() <= a[j].second.size()){
                        ans.push_back(a[j].first);
                    }
                    else{
                        ans.push_back(a[j].second);
                    }
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    return 0;
}