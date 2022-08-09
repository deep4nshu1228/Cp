#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m,k;
        cin >> n >> m >> k;

        int cards_per_player = n/k;
        int x = min(m, cards_per_player);
        int y = (m - x + k - 2)/(k-1);

        cout << x - y << "\n";
    }
    return 0;
}