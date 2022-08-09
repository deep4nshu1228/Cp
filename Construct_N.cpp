#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin >> n;

    if(n==1 || n==3 || n==5){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}