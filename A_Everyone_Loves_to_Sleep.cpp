#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,H,M;
    cin  >> n >> H >> M;
    vector<pair<int,int>> a;
    for(int i=0; i<n; i++){
        int h,m; cin >> h >> m;
        a.push_back(make_pair(h,m));
    }

    sort(all(a));
    int x,y;
    for(int i=0; i<n; i++){
        if(a[i].first == H){
            if(a[i].second >= M){
                x = a[i].first;
                y = a[i].second;
                cout << x-H << " " << y-M << "\n";
                return;
            }
        }
        else if(a[i].first > H){
            if(a[i].second >= M){
                x = a[i].first;
                y = a[i].second;
                cout << x-H << " " << y-M << "\n";
                return;
            }
            else{
                x = a[i].first-1;
                y = 60+a[i].second;
                cout << x-H << " " << y-M << "\n";
                return;
            }
        }
    }

    a[0].first += 24;
    if(a[0].second >= M){
        cout << a[0].first-H << " "  << a[0].second-M << "\n";
    }
    else{
        cout << a[0].first-1-H << " "  << (60+a[0].second)-M << "\n";
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}