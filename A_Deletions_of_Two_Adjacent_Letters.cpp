#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        char c; cin >> c;

        vector<int> index;

        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                index.push_back(i);
            }
        }

        string ans = "NO";

        for(int i=0; i<index.size(); i++){
            if(index[i]%2 == 0){
                ans = "YES";
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}