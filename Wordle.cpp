#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        string t; cin >> t;

        string m;
        for(int i=0; i<5; i++){
            if(s[i] != t[i]){
                m.push_back('B');
            }
            else{
                m.push_back('G');
            }
        }

        cout << m << "\n";
    }
    return 0;
}