#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;

        char a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        int ans = 0;
        if(2*x <= y){
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j] == '.'){
                        ans += x;
                    }
                }
            }
            cout << ans << "\n";
        }
        else{
            for(int i=0; i<n; i++){
                for(int j=0; j<m-1; j+=2){
                    if(a[i][j] == '.' && a[i][j+1] == '.'){
                        ans += y;
                        a[i][j] = '*';
                        a[i][j+1] = '*';
                    }
                }
            }
            for(int i=0; i<n; i++){
                for(int j=1; j<m-1; j+=2){
                    if(a[i][j] == '.' && a[i][j+1] == '.'){
                        ans += y;
                        a[i][j] = '*';
                        a[i][j+1] = '*';
                    }
                }
            }
            
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j] == '.'){
                        ans += x;
                    }
                }
            }
            cout << ans << "\n";
        }
    }

    return 0;
}