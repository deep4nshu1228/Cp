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

        if(count(all(s),'1') == 0){
            cout << "0\n";
            continue;
        }
        int cnt = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == '1' && s[i+1] == '1'){
                cnt++;
            }
        }
        if(!cnt) cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}