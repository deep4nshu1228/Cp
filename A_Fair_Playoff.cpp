#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        vector<int> a(4);
        for(auto &it: a) cin >> it;

        // vector<int> b(4);
        // for(int i=0; i<4; i++){
        //     b[i] = a[i];
        // }

        // sort(all(b));

        // if( (a[0] == b[3] && a[1] == b[2]) || (a[0]== b[2] && a[1] == b[3]) || (a[2] == b[3] && a[3] == b[2]) || (a[2]== b[2] && a[3] == b[3]) ){
        //     cout << "NO\n";
        // }
        // else{
        //     cout << "YES\n";
        // }

        if(min(a[0],a[1]) > max(a[2],a[3]) || min(a[2],a[3]) > max(a[0],a[1])){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}