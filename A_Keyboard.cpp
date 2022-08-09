#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    char a;
    cin >> a;
    string s;
    cin >> s;

    string m = "qwertyuiop";
    string n = "asdfghjkl;";
    string o = "zxcvbnm,./";

    string ans;
    if(a == 'R'){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<m.size(); j++){
                if(s[i] == m[j]){
                    ans.push_back(m[j-1]);
                }
            }
            for(int j=0; j<n.size(); j++){
                if(s[i] == n[j]){
                    ans.push_back(n[j-1]);
                }
            }
            for(int j=0; j<o.size(); j++){
                if(s[i] == o[j]){
                    ans.push_back(o[j-1]);
                }
            }
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<m.size(); j++){
                if(s[i] == m[j]){
                    ans.push_back(m[j+1]);
                }
            }
            for(int j=0; j<n.size(); j++){
                if(s[i] == n[j]){
                    ans.push_back(n[j+1]);
                }
            }
            for(int j=0; j<o.size(); j++){
                if(s[i] == o[j]){
                    ans.push_back(o[j+1]);
                }
            }
        }
    }
    cout << ans << "\n";

    return 0;
}