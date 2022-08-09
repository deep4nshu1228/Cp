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

        string s;
        cin >> s;

        string ans = "YES";

        int r = count(all(s), 'R');
        int l = count(all(s), 'L');
        int u = count(all(s), 'U');
        int d = count(all(s), 'D');

        if(x >= 0 && y >= 0){
            if(r < x || u < y) ans = "NO";
        }
        else if(x < 0 && y >= 0){
            if(l < abs(x) || u < y) ans = "NO";
        }
        else if(x < 0 && y < 0){
            if(l < abs(x) || d < abs(y)) ans = "NO";
        }
        else{
            if(r < x || d < abs(y)) ans = "NO";        
        }

        cout << ans << "\n";
    }
    return 0;
}