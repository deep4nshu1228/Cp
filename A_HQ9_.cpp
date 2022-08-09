#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;
    
    string ans = "NO";
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            ans = "YES";
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}