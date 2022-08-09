#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        vector<int> b(n);
        for(auto &it: b) cin >> it;

        vector<pair<int,int>> x;
        for(int i=0; i<n; i++){
            x.push_back(make_pair(a[i],b[i]));
        }

        sort(all(x));
        for(int i=0; i<n; i++){
            if(x[i].first <= k){
                k += x[i].second;
            }
        }
        cout << k << "\n";
    }
    return 0;
}