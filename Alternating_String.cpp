#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        string s; cin >> s;

        int one = count(all(s), '1');
        int zero = count(all(s), '0');

        if(one == zero){
            cout << one+zero << "\n";
        }
        else{
            cout << 2*min(one,zero) + 1 << "\n";
        }
    }
    return 0;
}