#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    string s; cin >> s;
    if(s.size() == 2){
        cout << s[1] << "\n";
        return;
    }
    int min = 10;

    for(int i=0; i<s.size(); i++){
        if(s[i]-'0' < min){
            min = s[i]-'0';
        }
    }

    cout << min << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}