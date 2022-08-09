#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,r;
        cin >> n >> r;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        vector<int> b(n);
        for(auto &it: b) cin >> it;

        vector<pair<int,int>> x;

        for(int i=0; i<n; i++){
            if(a[i] <= r)
                x.push_back(make_pair(a[i]-b[i],a[i]));
        }

        sort(all(x));
        int cnt = 0;
        for(int i = 0; i<x.size(); i++){
            if(r >= x[i].second){
                int k = r - x[i].second;
                int m = k/x[i].first;
                r -= m*x[i].first;
                if(r%x[i].first == 0){
                    cnt++;
                    r -= x[i].first;
                } 
                cnt+=k/x[i].first;
            }

            if(r == 0)
                break;
        }

        cout << cnt << "\n";
    }
    return 0;
}