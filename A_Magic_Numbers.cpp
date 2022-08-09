#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s; cin >> s;

    string ans = "YES";

    for(int i=0; i<s.size(); i++){
        if(s[i] != '1' && s[i] != '4'){
            ans = "NO";
            break;
        }
    }

    if(s[0] == '4') ans = "NO";
    else if(s.find("444") != s.npos){
        ans = "NO";
    }

    cout << ans << "\n";
    return 0;
}