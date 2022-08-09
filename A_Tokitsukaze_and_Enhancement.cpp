#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int x; cin >> x;
    if(x%4 == 1) cout << "0 A\n";
    else if(x%4 == 2) cout << "1 B\n";
    else if(x%4 == 3) cout << "2 A\n";
    else cout << "1 A\n";
}
int main()
{
    solve();
    return 0;
}