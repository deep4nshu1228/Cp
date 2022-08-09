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

        if(n%m == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}