#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    int total = a+b+c;
    if(total >= 100 && a>=10 && b>=10 && c>=10)
        cout << "PASS\n";
    else
        cout << "FAIL\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}