#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
#define pb push_back;
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;

    char t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> t[i][j];
        }
    }

    int ans = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            string w = "";
            w.push_back(t[i][j]);
            w.push_back(t[i+1][j]);
            w.push_back(t[i][j+1]);
            w.push_back(t[i+1][j+1]);
            sort(all(w));

            if(w=="acef") ans++;
        }
    }
    cout << ans << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}