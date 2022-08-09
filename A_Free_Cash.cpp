#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    int x0,y0;
    cin >> x0 >> y0;

    int cash = 1, cnt = 1;
    n--;
    while(n--){
        int x,y;
        cin >> x >> y;
        if(x == x0 && y == y0){
            cnt++;
            cash = max(cnt,cash);
        }
        else{
            cnt = 1;
        }
        x0 = x;
        y0 = y;
    }

    cout << cash << "\n";
    return 0;
}