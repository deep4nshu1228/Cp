#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string a,b,c;
        cin >> a >> b >> c;

        string ans = "YES"; 
        for(int i=0; i<a.size(); i++){
            if(c[i] != a[i] && c[i] != b[i])
                ans = "NO";
        }

        cout << ans << "\n";
    }
    return 0;
}