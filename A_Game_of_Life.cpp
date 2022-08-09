#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;

        for(int i=0; i<min(n,m); i++){
            string ans; 
            for(int j=0; j<n; j++){
                if(j == 0){
                    if(s[j] == '0' && s[j+1] == '1'){
                        ans.push_back('1');
                    }
                    else{
                        ans.push_back(s[j]);
                    }
                }
                else if(j == n-1){
                    if(s[j] == '0' && s[j-1] == '1'){
                        ans.push_back('1');
                    }
                    else{
                        ans.push_back(s[j]);
                    }
                }
                else{
                    if(s[j] == '0' && s[j-1] == '1' && s[j+1] == '1'){
                        ans.push_back('0');
                    }
                    else if(s[j] == '0' && (s[j-1] == '1' || s[j+1] == '1')){
                        ans.push_back('1');
                    }
                    else{
                        ans.push_back(s[j]);
                    }
                }
            }
            s = ans;
        }

        cout << s << "\n";
    }
    return 0;
}