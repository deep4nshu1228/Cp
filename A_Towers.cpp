#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    int cnt[1001];
    for(int i=0; i<1001; i++){
        cnt[i] = 0;
    }
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        cnt[it]++;
    }
    
    int mx = 0, total = 0;
    for(int i=0; i<1001; i++){
        if(cnt[i] > 0){
            total++;
            mx = max(mx,cnt[i]);
        }
    }

    cout << mx << " " << total << "\n";
    return 0;
}