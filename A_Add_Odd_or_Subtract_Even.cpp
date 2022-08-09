#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << "\n";
            continue;
        }
        int ans;
        if(a > b){
            if( (a-b)%2 != 0 ){
                ans = 2;
            }
            else{
                ans = 1;
            }
        }
        else{
            if( (b-a)%2 != 0 ){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}