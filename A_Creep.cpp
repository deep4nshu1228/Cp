#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

ll min(ll a, ll b){
    if(a<b) return a;
    else return b;
}
void solve(){
    ll a,b; 
    cin >> a >> b;

    for(int i=0; i<min(a,b); i++){
        cout << "01";
    }
    for(int i=0; i<abs(a-b); i++){
        cout << (a<b)?1:0;
    }
    cout << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}