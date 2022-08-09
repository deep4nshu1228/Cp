#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for(int i=0; i<n; i++){
        if((s[i]-'0')%2 == 0)
            ans += (i+1);
    }
    cout << ans << "\n";
    return 0;
}