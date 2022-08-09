#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    // string ans = "EASY";
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     if(x == 1){ ans = "HARD"; }
    // }
    // cout << ans << "\n";

    int a = 0;
    for(int i=0; i<n; i++){
        int b; cin >> b;
        a = max(a,b);
    }
    cout << (a>0? "HARD":"EASY");
    return 0;
}