#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;


int main()
{
    int n,m;
    cin >> n >> m;

    int ans = 1;
    for(int i=1; i<=min(n,m); i++){
        ans *= i;
    }
    cout << ans << "\n";
    return 0;
}