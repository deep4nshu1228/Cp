#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        for(int i=0; i<s.size(); i++){
            if(i%2 == 0){
                if(s[i] == 'a'){
                    s[i] = 'b';
                }
                else{
                    s[i] = 'a';
                }
            }
            else{
                if(s[i] == 'z'){
                    s[i] = 'y';
                }
                else{
                    s[i] = 'z';
                }
            }
        }

        cout << s << "\n";
    }
    return 0;
}