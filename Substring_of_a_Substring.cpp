#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s;
        cin >> s;

        int n = s.size();

        int cnt = 0;
        for(int i=1; i<n; i++){
            int k = 0;
            while(s[i] != s[0] && s[i] != s[n-1]){
                k++;
                i++;
            }
            cnt = max(k,cnt);
        }

        if(!cnt) cout << "-1\n";
        else cout << cnt << "\n";
    }
    return 0;
}