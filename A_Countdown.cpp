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

        ll cnt = 0;
        for(int i=0; i<n; i++){
            if(i != n-1){
                if(s[i] != '0'){
                    cnt += int(s[i] - '0');
                    cnt++;
                }
            }
            else{
                if(s[i] != '0'){
                    cnt += int(s[i] - '0');
                }
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}