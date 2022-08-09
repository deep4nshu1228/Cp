#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s;
        cin >> s;

        vector<int> keys(3),doors(3);

        string ans = "YES";
        for(int i=0; i<6; i++){
            if((int)s[i] > 96){
                for(int j=i; j>=0; j--){
                    if(s[j] == s[i]-32){
                        ans = "NO";
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}