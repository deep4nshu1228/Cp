#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans = "YES";
        for(char c='A'; c<='Z'; c++){
            int first = n;
            int last = -1;

            for (int i = 0; i < n; i++)
            {
                if(s[i] == c){
                    first = min(i, first);
                    last = max(i,last);
                }
            }

            for(int i = first; i < last; i++){
                if(s[i] != c){
                    ans = "NO";
                    break;
                }
            }
            if(ans == "NO") break;
        }

        cout << ans << "\n";
    }
    return 0;
}