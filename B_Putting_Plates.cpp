#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m;
        cin >> n >> m;

        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                a[i][j] = 0;
            }
        }

        for(int i=0; i<n; i+=2){
            a[i][0] = 1;
            a[i][m-1] = 1;
        }

        for(int j=2; j<=m-3; j+=2){
            a[0][j] = 1;
            a[n-1][j] = 1;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << a[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}