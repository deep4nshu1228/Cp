#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin >> n;
    int grid[50][50];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==1) continue;
            bool pass = false;
            for(int r = 0;r<n;r++){
                if(r==i) continue;
                for(int c = 0; c < n; c++){
                    if(c==j) continue;
                    int sum = grid[r][j]+grid[i][c];
                    if(sum==grid[i][j]){
                        pass=true;
                        break;
                    }
                }
                if(pass)break;
            }
            if(!pass){
                cout << "No"<<endl;
                return;
            }
        }
    }
    cout << "Yes"<<endl;
}
int main()
{
    solve();
    return 0;
}