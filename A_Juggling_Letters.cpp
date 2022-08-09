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

        // vector<string> a(n);
        // for(auto &it: a) cin >> it;

        // vector<int> x(26);
        // for(auto &c: x) c = 0;

        // for(int i = 0; i<n; i++){
        //     for(int j = 0; j < a[i].size(); j++){
        //         x[a[i][j] - 97]++;
        //     }
        // }


        vector<int> x(26);
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            for(auto &chr: s){
                x[chr - 'a']++;
            }
        }
        string ans = "YES\n";
        for(int i=0; i<26; i++){
            if(x[i]%n != 0){
                ans = "NO\n";
                break;
            }
        }

        cout << ans;
    }
    return 0;
}