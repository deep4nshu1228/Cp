#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    long a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    long x = a;
    long y = (b < c) ? b : c;

    long total(0);
    if(e < f){
        y = (y < d) ? y : d;
        total = f * y;
        d -= y; x = (x < d) ? x : d;
        total += e * x;
    }
    else{
        x = (x < d) ? x : d;
        total = e * x;
        d -= x; y = (y < d) ? y : d;
        total += f * y;
    }

    cout << total << "\n";
}
int main()
{
    solve();
    return 0;
}