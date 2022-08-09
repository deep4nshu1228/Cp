#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string ans = "NO\n";
    for(int i=0; i<n; i++){
        string x; cin >> x;
        int a,b;
        cin >> a >> b;
        if(a >= 2400 && b >= 2400 && b > a)
            ans = "YES\n";
    }
    cout << ans;
    return 0;
}