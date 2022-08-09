#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m; cin >> n >> m;
    char s[n][m];
    for (int i = 0; i < n; i++){
        for(int j=0; j<m; j++){
            cin >> s[i][j];
        }
    }
    int minX = INT_MAX, maxX = INT_MIN, minY = INT_MAX, maxY = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'B') {
                minX = min(minX, i);
                minY = min(minY, j);
                maxX = max(maxX, i);
                maxY = max(maxY, j);
            }
        }
    }
    cout << ((minX + maxX) / 2 + 1) << " " << ((minY + maxY) / 2 + 1) << "\n";
}
int main()
{
    solve();
    return 0;
}