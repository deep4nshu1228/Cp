#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<pair<int,int>> queries;
    for(int i=0; i<q; i++){
        int x; cin >> x;
        int y; cin >> y;
        queries.push_back(make_pair(x,y));
    }

    int cnt1 = count(all(a),1);
    int cnt0 = count(all(a),0);

    for(int i=0; i<q; i++){
        if(queries[i].first == 1){
            if(a[queries[i].second - 1] == 1){
                a[queries[i].second - 1] = 0;
                cnt0++; cnt1--;
            }
            else{
                a[queries[i].second - 1] = 1;
                cnt0--; cnt1++;
            }
        }
        else{
            if(cnt1 >= queries[i].second){
                cout << "1\n";
            }
            else{
                cout << "0\n";
            }
        }
    }

    return 0;
}