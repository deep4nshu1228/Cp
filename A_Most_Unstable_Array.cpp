#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m;
        cin >> n >> m;

        // if(n == 1){
        //     cout << "0\n";
        // }
        // else if(n == 2){
        //     cout << m << "\n";
        // }
        // else{
        //     cout << 2*m << "\n";
        // }

        cout << min(2,n-1) * m << "\n";
    }
    return 0;
}