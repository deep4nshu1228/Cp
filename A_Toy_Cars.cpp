#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int ans=0;
    vector<int> ind;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(a[i][j]==0||a[i][j]==2) c++;
        }
        if(c==n-1){
            ans++;
            ind.push_back(i+1);
        }
    }
    
    cout << ans << "\n";
    for(int i=0; i<ans; i++){
        cout << ind[i] << " ";
    }
    cout << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}