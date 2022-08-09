#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        int a = count(all(s), 'A');
        int b = count(all(s), 'B');
        int c = count(all(s), 'C');

        string ans = "NO";
        if(a > 0 && b > 0 && b > 0){
            if(b == a+c){
                ans = "YES";
            }
        }
        else if(a == 0 && b == c){
            ans = "YES";
        }
        else if(c == 0 && a == b){
            ans = "YES";
        }

        cout << ans << "\n";
    }
    return 0;
}