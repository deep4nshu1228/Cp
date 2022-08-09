#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    
    string ans = "#Black&White";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 'C' || a[i][j] == 'Y' || a[i][j] == 'M'){
                ans = "#Color";
            }
        }
        if(ans == "#Color") break;
    }

    cout << ans << endl;

    return 0;
}