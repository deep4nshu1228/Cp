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

        if(n == 1 && m == 1){
            cout << "0\n";
        }
        else if(min(n,m) == 1){
            cout << "1\n";
        }
        else{
            cout << "2\n";
        }
    }
    return 0;
}