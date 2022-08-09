#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int e = 0;
        for(int i = 0; i<a.size(); i+=2){
            if( (i%2 != a[i]%2) ) { e++; }
        }
        int o = 0;
        for(int i = 1; i<a.size(); i+=2){
            if( (i%2 != a[i]%2) ) { o++; }
        }

        if(o != e){
            cout << -1 << "\n";
        }
        else{
            cout << o << "\n";
        }
    }
    return 0;
}