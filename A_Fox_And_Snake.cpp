#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i%2 == 0){
                if(i%4 == 0 && j == 1){
                    cout << '#';
                }
                else if(i%4 != 0 && j == m){
                    cout << '#';
                }
                else{
                    cout << '.';
                }
            }
            else{
                cout << '#';
            }
        }
        cout << "\n";
    }
    return 0;
}