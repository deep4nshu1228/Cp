#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    string a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    
    if(a[1] == s[1] || b[1] == s[1] || c[1] == s[1] || d[1] == s[1] || e[1] == s[1] || a[0] == s[0] || b[0] == s[0] || c[0] == s[0] || d[0] == s[0] || e[0] == s[0]){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}