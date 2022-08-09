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

        if( (n>2 && m>1) || (n>1 && m>2)){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}