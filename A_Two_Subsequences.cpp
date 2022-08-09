#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        char lexo_small = s[0];
        for(int i=1; i<s.size(); i++){
            if((int)s[i] < lexo_small){
                lexo_small = s[i];
            }
        }

        cout << lexo_small << " ";
        bool output = true;
        for(int i=0; i<s.size(); i++){
            if(output && s[i] == lexo_small){
                output = false;
                continue;
            }
            cout << s[i];
        }
        
        cout << "\n";
    }
    return 0;
}