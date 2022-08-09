#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1] && s[i] == '0'){
                cnt+=2;
            }
        }

        for(int i=0; i<n-2; i++){
            if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}