#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b,m;
        cin >> a >> b >> m;

        int ans;
        if(a >= b){
            ans = min(a-b,(m-a)+b);
        }
        else{
            ans = min(b-a,(m-b)+a);
        }
        cout << ans << "\n";
    }
    return 0;
}