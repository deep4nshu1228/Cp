#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;

        cout << max(x-1,n-x)+max(y-1,m-y) << "\n";
    }
    return 0;
}