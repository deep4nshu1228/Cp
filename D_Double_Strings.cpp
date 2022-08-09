#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    string s[n];
    map<string,bool> m;
    for(int i=0; i<n; i++){
        cin >> s[i];
        m[s[i]] = true;
    }

    for(int i=0; i<n; i++){
        bool ok = false;
        for(int j=0; j<s[i].length(); j++){
            string prefix = s[i].substr(0,j);
            string suffix = s[i].substr(j,s[i].length()-j);

            if(m[prefix] && m[suffix]) ok = true;
        }
        cout << ok;
    }
    cout << "\n";
    
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}