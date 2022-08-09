#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        int n = s.size();
        if(s[0] == s[n-1]){
            cout << s << "\n";
        }
        else{
            s[0] = s[n-1];
            cout << s << "\n";
        }
    }
    return 0;
}