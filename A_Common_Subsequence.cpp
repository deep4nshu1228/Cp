#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        vector<int> b(m);
        for(auto &nxt: b) cin >>nxt;

        bool ans = false;
        int index = -1;

        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                if(a[i] == b[j]){
                    ans = true;
                    index = i;
                    break;
                }
            }
            if(index != -1) break;
        }
        
        if(ans){
            cout << "YES\n" << 1 << " " << a[index] << "\n";
        }
        else{
            cout <<"NO\n";
        }
    }
    return 0;
}