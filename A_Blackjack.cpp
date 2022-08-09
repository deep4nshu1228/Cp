#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    int x = n - 10;

    if( (x<10 && x>0) || x==11)
        cout << 4 << "\n";
    else if(x == 10)
        cout << 15 << "\n";
    else
        cout << 0 << "\n";
}
int main()
{
    solve();
    return 0;
}