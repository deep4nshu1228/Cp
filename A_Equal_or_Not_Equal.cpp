#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        int cntN = count(all(s), 'N');

        if(cntN != 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}