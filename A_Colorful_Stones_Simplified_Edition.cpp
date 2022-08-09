#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    string t;
    cin >> t;

    int str = 0;
    int cmd = 0;

    while(str < s.size() && cmd < t.size()){
        if(t[cmd] == s[str]){
            str++;
        }
        cmd++;
    }
    cout << str+1 << "\n";
    return 0;
}