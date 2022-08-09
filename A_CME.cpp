#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n == 2) cout << "2\n";
        else if(n%2 == 0) cout << "0\n";
        else cout << "1\n";
    }
    return 0;
}