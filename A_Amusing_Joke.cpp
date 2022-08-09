#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s; cin >> s;

    if(s1.length() +  s2.length() != s.length()){
        cout << "NO\n";
    }
    else{
        int a1[26];
        int a2[26];
        for(int i = 0; i < 26; i++){
            a1[i] = 0;
            a2[i] = 0;
        }

        for(int i = 0; i < s1.length() ; i++){
            a1[(int)s1[i] - 65]++;
        }
        for(int i = 0; i < s2.length() ; i++){
            a1[(int)s2[i] - 65]++;
        }

        for(int i = 0; i < s.length(); i++){
            a2[(int)s[i] - 65]++;
        }

        string ans = "YES";
        for(int i=0; i<26; i++){
            if(a1[i] != a2[i]){
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}