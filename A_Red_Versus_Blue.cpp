#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,r,b;
        cin >> n >> r >> b;

        int max_wins = r/(b+1);

        int cnt = r%(b+1);
        string ans = "";
        
        while(r){
            int temp = max_wins+(cnt>0); 
            cnt = max(0,cnt-1);
            r-=temp;
            while(temp>0){
                ans+='R';
                temp--;
            }
            if(b>0){
                ans+='B';
                b--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}