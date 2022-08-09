#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int red = 0, blue = 0;
    ll n;
    string r,b;
    cin >> n >> r >> b;

    for(int i=0; i<n; i++){
        if(r[i] > b[i]) red++;
        else if(b[i] > r[i]) blue++;
    }

    if(red > blue)
        cout << "RED\n";
    else if(blue > red)
        cout << "BLUE\n";
    else
        cout << "EQUAL\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}