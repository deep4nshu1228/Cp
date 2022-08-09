#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

void solve(){
    int n,m;
    cin >> n >> m;
        
    vector<string> a(n);
    for(string& x: a) cin >> x;
    int row=-1,column=-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 'E')
                continue;
            if(row == -1){
                row = i;
                column = j;
            }
            if(i < row || j < column){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--){
        solve();
    }
    return 0;
}