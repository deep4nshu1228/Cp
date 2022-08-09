#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    int maxx = max(a,max(b,c));
    int minx = min(a,min(b,c));
    // int ans = INT_MAX;
    // for(int i = minx; i <= maxx; i++){
    //     if( (abs(a-i)+abs(b-i)+abs(c-i)<ans)){
    //         ans = abs(a-i)+abs(b-i)+abs(c-i);
    //     }
    // }
    // cout << ans << "\n";

    /*
    * will be middlemost point
    */
    cout << maxx - minx << "\n";

    return 0;
}