#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k;
        cin >> n >> k;

        string s; cin >> s;

        if(k == 0){
            cout << 1 << "\n";
            continue;
        }

        string rev_s = s;
        reverse(all(s));
        
        if(s == rev_s){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        }
    }
    return 0;
}