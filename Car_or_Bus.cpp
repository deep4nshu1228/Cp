#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x,y;
        cin >> x >> y;
        
        string ans = "SAME";
        if(x > y) ans = "CAR";
        else if(x < y) ans = "BIKE";

        cout << ans << "\n";
    }
    return 0;
}