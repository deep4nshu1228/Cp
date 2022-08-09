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
        vector<string> a(n-2);
        for(auto &it: a) cin >> it;

        string s = "";
        for(int i = 0; i<a.size(); i++){
            s = s + a[i];
        }
        string ans = "";
        if(s.length() <= 2){
            ans = ans + s[0]+s[0]+s[1];
            cout << ans << "\n";
            continue;
        }
        int flag = -1;
        for(int i=1; i<s.size()-1; i+=2){
            if(s[i] != s[i+1]){
                flag = i;
                break;
            }
        }
        ans = ans + s[0];
        if(flag == -1){
            for(int i = 1; i < s.length(); i+=2){
                ans += s[i];
            }
            ans += s[0];
        }
        else{
            for(int i = 1; i < s.length(); i+=2){
                ans += s[i];
                if(i == flag){ ans += s[flag+1]; }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}