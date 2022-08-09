#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m,r,c;
        cin >> n >> m >> r >> c;

        char a[n][m];
        
        int black = 0, white = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                if(a[i][j] == 'W') white++;
                else black++;
            }
        }

        if(black == 0){
            cout << "-1\n";
            continue;
        }

        if(a[r-1][c-1] == 'B'){
            cout << "0\n";
        }
        else{
            bool ans = true;
            for(int i=1; i<=n; i++){
                if( (a[i-1][c-1] == 'B') ){
                    cout << "1\n";
                    ans = false;
                    break;
                }
            }

            if(ans){
                for(int i=1; i<=m; i++){
                    if((a[r-1][i-1] == 'B') ){
                        cout << "1\n";
                        ans = false;
                        break;
                    }
                }   
            }
    

            if(ans) cout << "2\n";
        }

        
    }
    return 0;
}