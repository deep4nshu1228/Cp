#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        int sum_a = 0;
        vector<int> a(n);
        for(auto &it: a){
            cin >> it;
            sum_a += it;
        }

        int sum_b = 0;
        vector<int> b(n);
        for(auto &it: b){
            cin >> it;
            sum_b += it;
        }

        if(sum_a != sum_b){
            cout << -1 << "\n";
        }
        else{
            int cnt = 0;
            vector<pair<int,int>> ans;
            for(int i=0; i<n; i++){
                if(a[i] < b[i]){
                    for(int j=0; j<n; j++){
                        if(j == i) continue;
                        else if(a[j] > b[j]){
                            while(a[i] < b[i] && a[j] > b[j]){
                                cnt++;
                                ans.push_back(make_pair(i+1,j+1));
                                a[i]++;
                                a[j]--;
                            }
                        }
                    }
                }
            }

            cout << cnt << "\n";
            for(int i = 0; i < cnt; i++){
                cout << ans[i].second << " " << ans[i].first << "\n";
            }
        }
    }
    return 0;
}