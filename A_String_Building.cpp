#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        if(s.size() < 2 || s[s.size()-1] !=  s[s.size()-2]){
            cout << "NO\n";
            continue;
        }

        char check = s[0];
        string ans = "YES\n";
        for(int i=1; i<s.size(); i++){
            int cnt = 1;
            while(s[i] == check && i < s.size()){
                i++; cnt++;
            }
            if(cnt < 2){
                ans = "NO\n";
                break;
            }
            check = s[i];
        }

        cout << ans;
    }
    return 0;
}