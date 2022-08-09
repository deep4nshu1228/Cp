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
        for(int i=0; i<n; i++){
            int x = 0;
            if(s[i] == 'A'){
                i++;
                while(s[i] != 'A' && i<n){
                    i++; x++;
                }
                cnt = max(cnt,x);
                i--;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}