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

        int cnt = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i] != ')'){
                break;
            }
            cnt++;
        }

        if(cnt > n-cnt) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}